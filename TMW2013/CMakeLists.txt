cmake_minimum_required(VERSION 2.8)
include(FRCDeploy)

project(MyRobot)
find_package(WPILib)
include_directories(${WPILib_INCLUDE_DIRS})

file(GLOB_RECURSE SOURCE_CODE *.cpp)

add_executable(my-code ${SOURCE_CODE})
target_link_libraries(my-code ${WPILib_LIBRARY})

#add_make_deploy(my-code 10.41.43.2) # where your team number is xxyy
add_make_deploy(my-code 10.4.13.2) # where your team number is xxyy

