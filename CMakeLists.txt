cmake_minimum_required(VERSION 3.0)

project(advancepwd)

add_executable(advancepwd main.cpp)

install(TARGETS advancepwd RUNTIME DESTINATION bin)
