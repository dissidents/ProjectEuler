cmake_minimum_required(VERSION 3.21)
project(ProjectEuler)

set(CMAKE_CXX_STANDARD 20)

add_executable(ProjectEuler main.cpp lib/Number.h Problems/Controller.cpp Problems/Users.h References/Problem.h Problems/LegenDaVinci/Problem_3.cpp References/User.h Problems/LegenDaVinci/LegenDaVinci.cpp Problems/LegenDaVinci/LegenDaVinci.h Problems/kabra4/Kabra4.cpp Problems/kabra4/Kabra4.h Problems/LegenDaVinci/Problem_6.cpp Problems/LegenDaVinci/Problem_7.cpp lib/Strings.cpp Problems/kabra4/Problem_21.cpp Problems/LegenDaVinci/Problem_8.cpp Problems/LegenDaVinci/Problem_9.cpp Problems/LegenDaVinci/Problem_10.cpp Problems/LegenDaVinci/Problem_11.cpp Problems/LegenDaVinci/Problem_12.cpp lib/BigInt.cpp Problems/kabra4/Testing_0.cpp References/lib.h References/utils.h)
