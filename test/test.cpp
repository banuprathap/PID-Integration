#include <assert>
#include <iostream>
#include <pidController.hpp>
#include <tuple>

class testPIDController{

public:
	testPIDController();
	~testPIDController();
	void testSetParams();
	void testComputeControl();
};

testPIDController::testPIDController(){}

testPIDController::~testPIDController(){}

void testPIDController::testSetParams() {
	pidController pid;
	pid.setParams(10,10,10);
	assert(pid.getParams() == std::make_tuple(10,10,10));
}


void testPIDController::testComputeControl() {
	assert(pid.computeControl(10,10,10) == 10.5);
}

