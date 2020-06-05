cmake_minimum_required(VERSION 3.15)
project(Dr_PacMan)

set(CMAKE_CXX_STANDARD 14)

set(ok sfml-graphics sfml-window sfml-system sfml-audio)

add_executable(Dr_PacMan main.cpp GameState.h game.h game.cpp MenuState.cpp MenuState.h PlayState.cpp PlayState.h
        Load_Sprites.cpp Load_Sprites.h  Object.cpp Object.h Tile_Map.cpp Tile_Map.h Collision_Tiles.h Collision_Tiles.cpp
        Player.cpp Player.h Ghost.cpp Ghost.h kidghost.cpp kidghost.h Help_File.h Help_File.cpp initialBack.cpp initialBack.h Ghost3.cpp Ghost3.h)

target_link_libraries(Dr_PacMan ${ok})