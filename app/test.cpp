#pragma once

#include <iostream>

class testPIDController
{
private:
	double testKd;
	double testKi;
	double testKp; 

public:
	void testPIDController();
	void ~testPIDController();
	void testParams(double &p, double &i, double &d);
	double computeControl(double &setVal, double &time);
	void printParams();
}

void testPIDController(){}

void ~testPIDController(){};

bool testPIDController::setParams(double &p, double &i, double &d) {
	/* assert test here */
	/* You may want to use getParams() method*/
}

std::tuple<double, double, double> testPIDController::getParams() {
	return std::make_tuple(Kp, Ki, Kd);
}

bool testPIDController::computeControl(double &setVal, double &time) {
	/* assert test here */
}