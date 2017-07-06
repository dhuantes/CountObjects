cmake_minimum_required(VERSION 3.1)


project(CountObjects)


set(CO_SOURCES
	${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/src/JoshHat.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/src/JoshHat.h
	)

add_executable(CountObjects ${CO_SOURCES})


