#ifndef INCLUDE_TEST_HPP_
#define INCLUDE_TEST_HPP_


class testPIDController{

public:
	testPIDController();
	~testPIDController();
	bool testSetParams(double &p, double &i, double &d);
	bool testComputeControl(double &setVal, double &time);
	bool testAllMethods();
};

#endif