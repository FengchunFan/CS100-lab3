#ifndef __RAND_HPP__
#define __RAND_HPP__

#include "base.hpp"

class Rand : public Base {
    public:
	Rand() : Base() {   }
	virtual double evaluate() { return 0.0;  }
	virtual std::string stringify() { return "";}
    private:
	double val;
	string valString;

};

#endif //__RAND_HPP__
