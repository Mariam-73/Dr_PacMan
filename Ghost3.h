
#ifndef OOP_PROJECT_GHOST3_H
#define OOP_PROJECT_GHOST3_H

class Ghost;
class Ghost3 :public Ghost{
public:
    Ghost3();
    ~Ghost3(){}
    void checkmoveobject(Collsion_Tiles &CT1,sf::Vector2f Player_Position, Tile_Map& T1); // check which direction to move ghost
};


#endif //OOP_PROJECT_GHOST3_H
