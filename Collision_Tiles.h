#pragma once
#include "SFML/Graphics.hpp"
#include "SFML/Audio.hpp"
#include "Load_Sprites.h"
#include <iostream>
#include <string>
#include "Object.h"
#include "Ghost.h"

class Tile_Map;
class Collsion_Tiles {
private:
    //sound
    sf:: SoundBuffer buffer;
    sf:: Sound sound;

    //player score
    int Score;
    Load_Sprites L1;

    //ghost movement
    bool up, down, right, left;
public:
    Collsion_Tiles();
    ~Collsion_Tiles(){}

    //Overloaded fuctions to check if player and ghost is allowed to move i.e. no tile
    void check_move(sf::Sprite &object, float z, Tile_Map& T1,int x,int y);
    void check_move(sf::Sprite &object,Tile_Map& T1);
    void reset(void);

    //Managing player score
    int score();

    //friend functions
    friend void Ghost::checkmoveobject(Collsion_Tiles &CT1,sf::Vector2f Player_Position, Tile_Map& T1);
    friend bool Ghost::getdirection(char x, Collsion_Tiles &CT1);
};

