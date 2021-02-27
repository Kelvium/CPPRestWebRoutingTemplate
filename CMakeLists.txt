cmake_minimum_required(VERSION 3.19)
project(CPPRestWebRoutingTemplate)

set(CMAKE_CXX_STANDARD 20)

find_package(cpprestsdk REQUIRED)

set(SRC src/main.cpp src/application.cpp src/application.hpp src/methodhandler.hpp src/handlers/get.cpp src/handlers/get.hpp src/routes/route.hpp src/routes/routes.hpp src/handlers/post.cpp src/handlers/put.cpp src/handlers/del.cpp src/handlers/post.hpp src/handlers/put.hpp src/handlers/del.hpp)
set(LIB cpprestsdk::cpprest)

add_executable(${CMAKE_PROJECT_NAME} ${SRC})
target_link_libraries(${CMAKE_PROJECT_NAME} PRIVATE ${LIB})
