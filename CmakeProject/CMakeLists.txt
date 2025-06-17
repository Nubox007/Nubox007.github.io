cmake_minimum_required(VERSION 3.10.0)
set(CMAKE_TOOLCHAIN_FILE "$ENV{VCPKG_ROOT}/scripts/buildsystems/vcpkg.cmake" CACHE STRING "Vcpkg toolchain file")

project(cpp VERSION 0.1.0 LANGUAGES C CXX)
#Require C++23
set(CXX_STANDARD_REQUIRED ON) #Make C++23 a hard requirement
set(CMAKE_CXX_STANDARD 23) # Default C++ standard for targets
set(CMAKE_CXX_SCAN_FOR_MODULES ON)


add_executable(${PROJECT_NAME} main.cpp)

