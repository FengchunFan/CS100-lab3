class DivByNonZeroMock: public Base {
    public:
	DivByNonZeroMock() {}
	virtual double evaluate() { return (10 / 2); }
	virtual std::string stringify() { return "(10.000000/2.000000)";}
}
