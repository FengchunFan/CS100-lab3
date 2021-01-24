#ifndef __ADD_TEST_HPP__
#define __ADD_TEST_HPP__

#include "gtest/gtest.h"

#include "add.hpp"
#include "op.hpp"

TEST(AddTest, AdditionBetweenZeros) {
	 Base* val = new Op(0);

	 Base* output = new ADD(val, val);
	 EXPECT_EQ(add->evaluate(), 0);
     	 EXPECT_EQ(add->stringify(), "0.000000 + 0.000000");
}

TEST(AddTest, AdditionBetweenPositive) {
	Base* val1 = new Op(4);
	Base* val2 = new Op(5);
	Base* output = new ADD(val1, val2);
    
	EXPECT_EQ(add->evaluate(), 9);
    	EXPECT_EQ(add->stringify(), "4.000000 + 5.000000");
}

TEST(AddTest, AdditionBetweenNegative) {
        Base* val1 = new Op(-1);
        Base* val2 = new Op(-2);
        Base* output = new ADD(val1, val2);

        EXPECT_EQ(add->evaluate(), -3);
        EXPECT_EQ(add->stringify(), "-1.000000 + -2.000000");
}

TEST(AddTest, AdditionBetweenLarge) {
        Base* val1 = new Op(1000);
        Base* val2 = new Op(2000);
        Base* output = new ADD(val1, val2);

        EXPECT_EQ(add->evaluate(), 3000);
        EXPECT_EQ(add->stringify(), "1000.000000 + 2000.000000");
}

TEST(AddTest, AdditionBetweenSmall) {
        Base* val1 = new Op(0.000001);
        Base* val2 = new Op(0.000002);
        Base* output = new ADD(val1, val2);

        EXPECT_EQ(add->evaluate(), 0.000003);
        EXPECT_EQ(add->stringify(), "0.000001 + 0.000002");
}

#endif
