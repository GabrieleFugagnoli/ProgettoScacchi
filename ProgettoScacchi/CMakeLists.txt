cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

project (scacchiera)

include_directories(include)

add_library(pezzo
	include/Pezzo.h
	src/Pezzo.cpp
)

add_library(scacchiera
	include/Scacchiera.h
	src/Scacchiera.cpp
)

add_library(pezziderivati
	include/PezziDerivati.h
	src/PezziDerivati.cpp
)

add_executable(game
	src/game.cpp
)

target_link_libraries(game
	pezzo
	scacchiera
)
