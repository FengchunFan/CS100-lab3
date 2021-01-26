#ifndef __MOCK_TESTS_HPP__
#define __MOCK_TESTS_HPP__

#include "base.hpp"

class DivByNonZeroMock: public Base {
    public:
	DivByNonZeroMock() {}
	virtual double evaluate() { return (10 / 2); }
	virtual std::string stringify() { return "(10.000000/2.000000)";}
};

class AddMock: public Base {
    public:
	AddMock() {}
	virtual double evaluate() { return (10 + 2); }
        virtual std::string stringify() { return "(10.000000+2.000000)";}
};

class AddZeroMock: public Base {
    public:
        AddZeroMock() {}
        virtual double evaluate() { return (0 + 0); }
        virtual std::string stringify() { return "(0.000000+0.000000)";}
};

class AddNegativeMock: public Base {
    public:
        AddNegativeMock() {}
        virtual double evaluate() { return ((-10) + (-2)); }
        virtual std::string stringify() { return "(-10.000000+-2.000000)";}
};

class SubMock: public Base {
    public:
        SubMock() {}
        virtual double evaluate() { return (10 - 2); }
        virtual std::string stringify() { return "(10.000000-2.000000)";}
};

#endif
