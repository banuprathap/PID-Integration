#pragma once

#include <iostream>
#include <tuple>

class pidController
{
private:
	double Kd;
	double Ki;
	double Kp; 
public:
	pidController();
	~pidController();
	void setParams(double &p, double &i, double &d);
	double computeControl(double &setVal,double &currentVal, double &time);
	std::tuple<double, double, double> getParams();
};

pidController::pidController(void){
	std::cout << "Header Links good" << std::endl;
}

pidController::~pidController(void){}

void pidController::setParams(double &p, double &i, double &d) {
	Kp = p;
	Ki = i;
	Kd = d;
}

std::tuple<double, double, double> pidController::getParams() {
	return std::make_tuple(Kp, Ki, Kd);
}

double pidController::computeControl(double &setVal,double &currentVal, double &time) {
	double newVal = 10.5;
	return newVal;
}