#pragma once

#include <iostream>

class PIDController
{
private:
	double Kd;
	double Ki;
	double Kp; 
public:
	void PIDController();
	void ~PIDController();
	void setParams(double &p, double &i, double &d);
	double computeControl(double &setVal, double &time);
	std::tuple<double, double, double> getParams();
}

void PIDController(){}

void ~PIDController(){};

void PIDController::setParams(double &p, double &i, double &d) {
	Kp = p;
	Ki = i;
	Kd = d;
}

std::tuple<double, double, double> PIDController::getParams() {
	return std::make_tuple(Kp, Ki, Kd);
}

double PIDController::computeControl(double &setVal, double &time) {
	double newVal = 10.5;
	return newVal;
}