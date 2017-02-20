add_executable(
	shell-app 
	main.cpp
	pidController
)
add_library(
	pidcontroller OBJECT pidcontroller.cpp
)
include_directories(
    ${CMAKE_SOURCE_DIR}/include
)
