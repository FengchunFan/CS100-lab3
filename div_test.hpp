#ifndef __DIV_TEST_HPP__
#define __DIV_TEST_HPP__

#include "gtest/gtest.h"

#include "div.hpp"

#include "mock_tests.hpp"
#include "mult.hpp"
#include "op.hpp"
#include "cmath"

TEST(DivTest, DivideNonZero) {
    Div* test = new Div(new Op(10), new Op(2));
    EXPECT_EQ(test->evaluate(), 5);
    EXPECT_EQ(test->stringify(), "(10.000000/2.000000)");
}

TEST(DivTest, DivideByZero) {
    Div* test = new Div(new Op(10), new Op(0));
    EXPECT_EQ(test->evaluate(), -1);
    EXPECT_EQ(test->stringify(), "(10.000000/0.000000)");
}

TEST(DivTest, DivideDecimals) {
    Div* test = new Div(new Op(6.6), new Op(2.0));
    EXPECT_DOUBLE_EQ(test->evaluate(), 3.3);
    EXPECT_EQ(test->stringify(), "(6.600000/2.000000)");
}

TEST(DivTest, DivideLarge) {
    Div* test = new Div(new Op(14400.0), new Op(112.2));
    EXPECT_NEAR(test->evaluate(), 128.3422, 0.0001);
    EXPECT_EQ(test->stringify(), "(14400.000000/112.200000)");
}

TEST(DivTest, DivideMults) {
    Div* test = new Div(new Mult(new Op(5.0),new Op(6.0)), new Mult(new Op(3.0), new Op(1.0)));
    EXPECT_DOUBLE_EQ(test->evaluate(), 10.0);
    EXPECT_EQ(test->stringify(), "((5.000000*6.000000)/(3.000000*1.000000))");
}


#endif //__DIV_TEST_HPP__
