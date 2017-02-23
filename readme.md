# C++ Boilerplate
[![Build Status](https://travis-ci.org/banuprathap/PID-Integration.svg?branch=master)](https://travis-ci.org/banuprathap/PID-Integration)
[![Coverage Status](https://coveralls.io/repos/github/banuprathap/PID-Integration/badge.svg?branch=master)](https://coveralls.io/github/banuprathap/PID-Integration?branch=master)
---

## Overview

Simple starter C++ project with:

- cmake
- googletest


## Installation

- Checkout the repo (and submodules)
```bash
$ git clone --recursive https://github.com/banuprathap/PID-Integration.git
cd cpp-boilerplate2
mkdir -p build
cd build
cmake ..
make
```


## Todo

- Add more test cases to check if velocity computed matches pre-calculated velocity
with various combinations of given setpoint, current velocities, and time.
- Add test cases with diff time equal to 0 to see if program will crash since
derivative is calculated by dividing diff between error and previous error
with time diff.


## Testing the code

- In your build/ directory
```bash
./test/cpp-test
```
