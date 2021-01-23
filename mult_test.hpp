#ifndef __MULT_TEST_HPP__
#define __MULT_TEST_HPP__

#include "gtest/gtest.h"

#include "mult.hpp"
#include "op.hpp"

TEST(MultTest, MultEvaluateNonZero) {
    Mult* test = new Mult(new Op(8), new Op(10));
    EXPECT_EQ(test->evaluate(), 80);
    EXPECT_EQ(test->stringify(), "(8.000000*10.000000)"); 
}

#endif // __MULT_TEST_HPP__
