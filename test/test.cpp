/**
 * @file test.cpp
 * Code was written as part of HomeWork 4
 * @brief Test cases for PID controller
 *
 * @author Banuprathap Anandan 
 * @version 1.0.1
 */

#include <assert.h>
#include <iostream>
#include <pidController.hpp>
#include <test.hpp>
#include <tuple>


/**
    
 *   @brief  Constructor function of
 *           PIDController
 *
 *   @param  none
 *   @return none
 */
testPIDController::testPIDController(){}
/**
    
 *   @brief  Destructor function of
 *           PIDController
 *
 *   @param  none
 *   @return none
 */
testPIDController::~testPIDController(){}

/**
 *   Test the set control parameter function of
 *           PIDController
 *
 *   @param  none
 *   @return none
*/
void testPIDController::testSetParams() {
	pidController pid;
	double x = 10.0;
	pid.setParams(x,x,x);
	assert(pid.getParams() == std::make_tuple(x,x,x));
}

/**
 *   Test the compute velocity function of
 *           PIDController
 *
 *   @param  none
 *   @return none
*/
void testPIDController::testComputeControl() {
	pidController pid;
	double x = 10.0;
	assert(pid.computeControl(x,x,x) == 0); /* Should return actual value after implementation*/
}

