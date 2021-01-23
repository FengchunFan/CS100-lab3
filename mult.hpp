#ifndef __MULT_HPP__
#define __MULT_HPP__

#include "base.hpp"

class Mult : public Base {
    public:
	Mult(Base* lhs, Base* rhs) : Base() { }
	virtual double evaluate() { return 0.0; }
	virtual std::string stringify() ( return ""; }
    private:
	Base* leftVal = nullptr;
	Base* rightVal = nullptr;

};

#endif // __MULT_HPP__
