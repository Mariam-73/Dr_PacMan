#pragma once

#include <time.h>
#include <cstdlib>
class Collsion_Tiles;
class Tile_Map;
class Object;

class Ghost : public Object {
protected:
    char dir;
private:
    char d;
    double distance;

private:
    double clac_distance(sf::Vector2f this_Position,sf::Vector2f Player_Position); //calculate distance from Player
public:
    Ghost();
    ~Ghost(){}
    void checkmoveobject(Collsion_Tiles &CT1,sf::Vector2f Player_Position, Tile_Map& T1); //check if it can move
    void moveobject(float speed); //move ghost
    bool checkposition(void); //check if ghost is at mid of tile
    bool getdirection(char x, Collsion_Tiles &CT1); //check direction in which ghost can move
};



