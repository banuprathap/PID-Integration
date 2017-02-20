#ifndef INCLUDE_PIDCONTROLLER_HPP_
#define INCLUDE_PIDCONTROLLER_HPP_


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