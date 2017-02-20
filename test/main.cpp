

#include "test.hpp"

int main() {
    testPIDController testPID;

    testPID.testSetParams();
    testPID.testComputeControl();

    return 0;
}