cmake_minimum_required(VERSION 3.19)
project(CPPRestWebRoutingTemplate)

set(CMAKE_CXX_STANDARD 20)

find_package(cpprestsdk REQUIRED)

set(SRC src/main.cpp src/application.cpp src/application.hpp src/methodhandler.hpp)
set(LIB cpprestsdk::cpprest)

add_executable(${CMAKE_PROJECT_NAME} ${SRC})
target_link_libraries(${CMAKE_PROJECT_NAME} PRIVATE ${LIB})
