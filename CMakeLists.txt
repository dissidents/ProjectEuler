cmake_minimum_required(VERSION 3.21)
project(ProjectEuler)

set(CMAKE_CXX_STANDARD 20)

add_executable(ProjectEuler main.cpp lib/Prime.cpp lib/Prime.h Problem.cpp Problems/Problem_1.cpp lib/Number.cpp Problems/Problems.cpp Problems/problem_ref.h Problems/Problem_2.cpp Problems/Problem_3.cpp Problems/Problem_3.h Problems/Problem_2.h Problems/Problem_1.h)
