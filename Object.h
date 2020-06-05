#include "SFML//Graphics.hpp"
#include "Load_Sprites.h"
#include <iostream>
#ifndef GAMES_PLAYER_H
#define GAMES_PLAYER_H
class Collsion_Tiles;
class Tile_Map;

//Abstract class
class Object {

protected:
    sf::Sprite object;
    Load_Sprites L2;

public:
    Object(){}
    ~Object(){}
    void drawobject(sf::RenderWindow &window);
    sf::Sprite& getobject(void);
    bool getCollision (sf::Vector2f playerPosition);
    virtual void moveobject(float speed)=0;
    virtual bool checkposition(void){return false;}
    virtual void checkmoveobject(Collsion_Tiles &CT1,sf::Vector2f Player_Position, Tile_Map& T1){}

};


#endif //GAMES_PLAYER_H
