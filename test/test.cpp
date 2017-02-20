#pragma once

#include <iostream>

class testPIDController{

public:
	void testPIDController();
	void ~testPIDController();
	bool testSetParams(double &p, double &i, double &d);
	bool testComputeControl(double &setVal, double &time);
	bool testAllMethods();
}

void testPIDController(){}

void ~testPIDController(){}

bool testPIDController::testSetParams(double &p, double &i, double &d) {
	/* assert test here */
	/* You may want to use getParams() method*/
}


bool testPIDController::testComputeControl(double &setVal, double &time) {
	/* assert test here */
}

bool testAllMethods() {
	/*assert test here*/
}