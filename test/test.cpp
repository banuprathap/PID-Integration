/**
 * @file test.cpp
 * Code was written as part of HomeWork 4
 * @brief Test cases for PID controller
 *
 * @author Banuprathap Anandan 
 * @version 1.0.1
 */


#include <pidController.hpp>
#include <tuple>
#include <gtest/gtest.h>
#include <test.hpp>
#include <assert.h>
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
	double x = 1.0;
	pid.setParams(x,x,x);
	ASSERT_EQ(pid.computeControl(x,x,x), 0); /* Should return actual value after implementation*/
	ASSERT_EQ(pid.computeControl(25,20,1.0), 15);
	ASSERT_EQ(pid.computeControl(25,20,0.0), 0);
}

