#ifndef __MULT_TEST_HPP__
#define __MULT_TEST_HPP__

#include "gtest/gtest.h"

#include "mock_tests.hpp"
#include "mult.hpp"
#include "op.hpp"

TEST(MultTest, MultEvaluateNonZero) {
    Mult* test = new Mult(new Op(8), new Op(10));
    EXPECT_EQ(test->evaluate(), 80);
    EXPECT_EQ(test->stringify(), "(8.000000*10.000000)"); 
}

TEST(MultTest, MultEvaluateZero) {
    Mult* test = new Mult(new Op(0), new Op(5));
    EXPECT_EQ(test->evaluate(), 0);
    EXPECT_EQ(test->stringify(), "(0.000000*5.000000)");
}

TEST(MultTest, MultEvaluateOneNegative) {
    Mult* test = new Mult(new Op(-1), new Op(5));
    EXPECT_EQ(test->evaluate(), -5);
    EXPECT_EQ(test->stringify(), "(-1.000000*5.000000)");
}

TEST(MultTest, MultEvaluateBothNegative) {
    Mult* test = new Mult(new Op(-1), new Op(-5));
    EXPECT_EQ(test->evaluate(), 5);
    EXPECT_EQ(test->stringify(), "(-1.000000*-5.000000)");
}

TEST(MultTest, MultEvaluateLargeNumber) {
    Mult* test = new Mult(new Op(1000), new Op(1000));
    EXPECT_EQ(test->evaluate(), 1000000);
    EXPECT_EQ(test->stringify(), "(1000.000000*1000.000000)");
}

TEST(MultTest, MultEvaluateSmallNumber) {
    Mult* test = new Mult(new Op(0.001), new Op(0.001));
    EXPECT_EQ(test->evaluate(), 0.000001);
    EXPECT_EQ(test->stringify(), "(0.001000*0.001000)");
}

TEST(MultTest, MultWithMockFunctions) {
    Mult* test = new Mult(new DivByNonZeroMock(), new AddMock());
    EXPECT_EQ(test->evaluate(), 60);
    EXPECT_EQ(test->stringify(), "((10.000000/2.000000)*(10.000000+2.000000))");
}

#endif // __MULT_TEST_HPP__
