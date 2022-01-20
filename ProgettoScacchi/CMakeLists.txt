cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

project (scacchiera)

include_directories(include)

include_directories(src)

add_library(pezzo
	include/Pezzo.h src/Pezzo.cpp)

add_library(casella
	include/Casella.h src/Casella.cpp)

add_library(scacchiera
	include/Scacchiera.h src/Scacchiera.cpp)

add_library(pezziderivati
	include/PezziDerivati.h src/PezziDerivati.cpp)

add_library(helperfunctions
	include/HelperFunctions.h src/HelperFunctions.cpp)

add_executable(game
	src/game.cpp
)

target_link_libraries(game pezzo casella scacchiera pezziderivati helperfunctions)


