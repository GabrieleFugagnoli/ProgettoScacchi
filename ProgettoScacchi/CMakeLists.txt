cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

project (scacchiera)

include_directories(include)

add_library(pezzo
	include/pezzo.h
	src/pezzo.cpp
)

add_library(scacchiera
	include/scacchiera.h
	src/scacchiera.cpp
)

add_executable(game
	src/game.cpp
)

target_link_libraries(game
	pezzo
	scacchiera
)
