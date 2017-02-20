add_executable(shell-app main.cpp pidController)
add_library(pidController OBJECT pidController.cpp)
include_directories(
    ${CMAKE_SOURCE_DIR}/include
)