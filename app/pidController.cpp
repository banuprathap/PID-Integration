#include <iostream>
#include <tuple>
#include <pidController.hpp>

pidController::pidController(void){
	std::cout << "Header Links good" << std::endl;
}

pidController::~pidController(void){}

void pidController::setParams(double &p, double &i, double &d) {
	pidController::Kp = p;
	pidController::Ki = i;
	pidController::Kd = d;
}

std::tuple<double, double, double> pidController::getParams() {
	return std::make_tuple(pidController::Kp, pidController::Ki, pidController::Kd);
}

double pidController::computeControl(double &setVal,double &currentVal, double &time) {
	double newVal = 10.5;
	return newVal;
}