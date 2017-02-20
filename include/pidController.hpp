/**
 * @file pidController.cpp
 * Code was written as part of HomeWork 4
 * @brief PID controller header file
 *
 * @author Banuprathap Anandan 
 * @version 1.0.1
 */

#ifndef INCLUDE_PIDCONTROLLER_HPP_
#define INCLUDE_PIDCONTROLLER_HPP_

/**
    
 *   @brief  Class definition of
 *           PIDController
 *
 *   @param  none
 *   @return none
 */
class pidController{
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

#endif