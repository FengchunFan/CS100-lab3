#ifndef __SUB_TEST_HPP__
#define __SUB_TEST_HPP__

#include "gtest/gtest.h"

#include "sub.hpp"
#include "op.hpp"

TEST(SubTest, SubtractionBetweenZeros) {
	 Base* val = new Op(0);

	 Base* output = new SUB(val, val);
	 EXPECT_EQ(sub->evaluate(), 0);
     	 EXPECT_EQ(sub->stringify(), "(0.000000 - 0.000000)");
}

TEST(SubTest, SubtractionBetweenPositive) {
	Base* val1 = new Op(5);
	Base* val2 = new Op(4);
	Base* output = new SUB(val1, val2);
    
	EXPECT_EQ(sub->evaluate(), 1);
    	EXPECT_EQ(sub->stringify(), "(5.000000 - 4.000000)");
}

TEST(SubTest, SubtractionBetweenNegative) {
        Base* val1 = new Op(-1);
        Base* val2 = new Op(-2);
        Base* output = new SUB(val1, val2);

        EXPECT_EQ(sub->evaluate(), 1);
        EXPECT_EQ(sub->stringify(), "(-1.000000 - -2.000000)");
}

TEST(SubTest, SubtractionBetweenLarge) {
        Base* val1 = new Op(2000);
        Base* val2 = new Op(1000);
        Base* output = new SUB(val1, val2);

        EXPECT_EQ(sub->evaluate(), 1000);
        EXPECT_EQ(sub->stringify(), "(2000.000000 - 1000.000000)");
}

TEST(SubTest, SubtractionBetweenSmall) {
        Base* val1 = new Op(0.000002);
        Base* val2 = new Op(0.000001);
        Base* output = new SUB(val1, val2);

        EXPECT_EQ(sub->evaluate(), 0.000001);
        EXPECT_EQ(sub->stringify(), "(0.000002 - 0.000001)");
}

#endif
