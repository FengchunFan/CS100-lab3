#ifndef __OP_TEST_HPP__
#define __OP_TEST_HPP__

#include "gtest/gtest.h"

#include "op.hpp"

TEST(OpTest, OpEvaluateNonZero) {
    Op* test = new Op(8);
    EXPECT_EQ(test->evaluate(), 8);
    EXPECT_EQ(test->stringify(), "8.000000");
}

TEST(OpTest, OpEvaluateNegative) {
    Op* test = new Op(-8.5);
    EXPECT_EQ(test->evaluate(), -8.5);
    EXPECT_EQ(test->stringify(), "-8.500000");
}

TEST(OpTest, OpEvaluateZero) {
    Op* test = new Op(0);
    EXPECT_EQ(test->evaluate(), 0);
    EXPECT_EQ(test->stringify(), "0.000000");
}

TEST(OpTest, OpEvaluateLargeNumber) {
    Op* test = new Op(10000);
    EXPECT_EQ(test->evaluate(), 10000);
    EXPECT_EQ(test->stringify(), "10000.000000");
}



#endif //__OP_TEST_HPP__
