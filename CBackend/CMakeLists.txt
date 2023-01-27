cmake_minimum_required(VERSION 3.17)
project(CBackend)

set(CMAKE_CXX_STANDARD 14)

add_executable(CBackend main.cpp IChessGame.cpp IChessGame.h Boardstate.cpp Boardstate.h)