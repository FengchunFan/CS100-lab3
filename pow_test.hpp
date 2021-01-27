#ifndef __POW_TEST_HPP__
#define __POW_TEST_HPP__

#include "gtest/gtest.h"

#include "pow.hpp"
#include "op.hpp"
#include "base.hpp"

TEST(PowTest, PowerZero) {
	 Base* val1 = new Op(5);
	 Base* val2 = new Op(0);
	 Base* output = new POW(val1, val2);
	 EXPECT_EQ(output->evaluate(), 1);
     	 EXPECT_EQ(output->stringify(), "(5.000000 ** 0.000000)");
}

TEST(PowTest, PositivePower) {
	Base* val1 = new Op(4);
	Base* val2 = new Op(2);
	Base* output = new POW(val1, val2);
    
	EXPECT_EQ(output->evaluate(), 16);
    	EXPECT_EQ(output->stringify(), "(4.000000 ** 2.000000)");
}

TEST(PowTest, NegativePower) {
        Base* val1 = new Op(1);
        Base* val2 = new Op(-2);
        Base* output = new POW(val1, val2);

        EXPECT_EQ(output->evaluate(), 1);
        EXPECT_EQ(output->stringify(), "(1.000000 ** -2.000000)");
}

TEST(PowTest, LargePower) {
        Base* val1 = new Op(1);
        Base* val2 = new Op(1000);
        Base* output = new POW(val1, val2);

        EXPECT_EQ(output->evaluate(), 1);
        EXPECT_EQ(output->stringify(), "(1.000000 ** 1000.000000)");
}



#endif
