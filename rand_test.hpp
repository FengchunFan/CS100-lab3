#ifndef __RAND_TEST_HPP__
#define __RAND_TEST_HPP__

#include "gtest/gtest.h"

#include "rand.hpp"

TEST(RandTest, RandEvaluateWithinRange) {
    Rand* test = new Rand();
    EXPECT_TRUE((test->evaluate()>=0) && (test->evaluate()<=99));
    EXPECT_EQ(test->stringify(), std::to_string(test->evaluate()));
}

TEST(RandTest, RandEvaluateArrayOfRandNumWithinRange) {
    Rand* test[100];
    for(int i = 0; i <=99; i++) {
	test[i] = new Rand();
    }
    for(int i = 0; i <=99; i++) {
        EXPECT_TRUE((test[i]->evaluate()>=0) && (test[i]->evaluate()<=99));
        EXPECT_EQ(test[i]->stringify(), std::to_string(test[i]->evaluate()));
    }
}

#endif // __RAND_TEST_HPP__
