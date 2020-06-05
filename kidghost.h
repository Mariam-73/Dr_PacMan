
#include "Load_Sprites.h"
#include "SFML/Graphics.hpp"
#ifndef OOP_PROJECT_KIDGHOST_H
#define OOP_PROJECT_KIDGHOST_H

class Object;
class kidghost :public Object{
private:
    char dir;
    sf::Vector2f initialPosition;
public:

    //move gost in constant horizontal positions
    kidghost(sf::Vector2f Position,bool x);
    ~kidghost(){}
    void moveobject(float speed);
    void getdirection();
};


#endif //OOP_PROJECT_KIDGHOST_H
