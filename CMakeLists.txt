project(test)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std=c++14")

add_executable(test
  spiTest.cpp
  SPIDevice.cpp
  BusDevice.cpp)

