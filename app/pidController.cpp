#pragma once

#include <iostream>

class pidController
{
private:
	double Kd;
	double Ki;
	double Kp; 
public:
	void pidController();
	void ~pidController();
	void setParams(double &p, double &i, double &d);
	double computeControl(double &setVal, double &time);
	std::tuple<double, double, double> getParams();
}

void pidController(){
	std::cout << "Header Links good";
}

void ~pidController(){}

void pidController::setParams(double &p, double &i, double &d) {
	Kp = p;
	Ki = i;
	Kd = d;
}

std::tuple<double, double, double> pidController::getParams() {
	return std::make_tuple(Kp, Ki, Kd);
}

double pidController::computeControl(double &setVal, double &time) {
	double newVal = 10.5;
	return newVal;
}