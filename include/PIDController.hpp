#ifndef PID_CONTROLLER_INCLUDE
#define PID_CONTROLLER_INCLUDE


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

#endif