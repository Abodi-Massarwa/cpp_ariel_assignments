cmake_minimum_required(VERSION 3.16)
project(Assignments)

set(CMAKE_CXX_STANDARD 20)

add_executable(Assignment_1 Assignment_1/PhoneticFinder.cpp Assignment_1/PhoneticFinder.hpp Assignment_1/Test_ofek.cpp Assignment_1/Test_snir.cpp Assignment_1/TestRunner.cpp Assignment_1/doctest.h)
add_executable(Assignment_2 Assignment_2/FamilyTree.hpp Assignment_2/FamilyTree.cpp Assignment_2/doctest.h Assignment_2/Test.cpp Assignment_2/Test_ariel.cpp Assignment_2/Test_hila.cpp Assignment_2/TestRunner.cpp)
add_executable(Assignment_3 Assignment_3/solver.hpp Assignment_3/solver.cpp Assignment_3/doctest.h Assignment_3/TestRunner.cpp Assignment_3/Test_iris.cpp Assignment_3/Test_shahar.cpp)
add_executable(Assignment_4 Assignment_4/DemoGame.cpp Assignment_4/DemoGame.hpp Assignment_4/Soldier.cpp Assignment_4/Soldier.hpp Assignment_4/FootSoldier.cpp Assignment_4/FootSoldier.hpp Assignment_4/FootCommander.cpp Assignment_4/FootCommander.hpp Assignment_4/Sniper.cpp Assignment_4/Sniper.hpp Assignment_4/SniperCommander.cpp Assignment_4/SniperCommander.hpp Assignment_4/Paramedic.cpp Assignment_4/Paramedic.hpp Assignment_4/ParamedicCommander.cpp Assignment_4/ParamedicCommander.hpp Assignment_4/Attacker.cpp Assignment_4/Attacker.hpp Assignment_4/Board.original.cpp Assignment_4/Board.original.hpp Assignment_4/TestRunner.cpp Assignment_4/Test_oriane_yirat.cpp Assignment_4/Test_amichai.cpp Assignment_4/doctest.h)
add_executable(Assignment_5_ Assignment_5_/accumulate.hpp Assignment_5_/range.hpp Assignment_5_/filterfalse.hpp Assignment_5_/compress.hpp Assignment_5_/doctest.h Assignment_5_/Test_snir.cpp Assignment_5_/TestRunner.cpp)