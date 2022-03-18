cmake_minimum_required(VERSION 3.21)
project(ProjectEuler)

set(CMAKE_CXX_STANDARD 20)

add_executable(ProjectEuler main.cpp lib/Prime.cpp Problem.cpp Problems/kabra4/Problem_1.cpp lib/Number.cpp Problems/Problems.cpp Problems/problem_list.h Problems/kabra4/Problem_2.cpp Problems/Problem.h Problems/kabra4/Problem_4.cpp Problems/LegenDaVinci/Problem_3.cpp Problems/kabra4/testingPrime.cpp)
