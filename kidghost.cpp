#include "Object.h"
#include "kidghost.h"
kidghost::kidghost(sf::Vector2f position, bool x) {
    object = *L2.getvg();
    object.setPosition(position);
    initialPosition.x = x == 1? position.x:(position.x-5*30);
    dir = 'r';
}

void kidghost::moveobject(float speed) {
    getdirection();
if(dir == 'r')
    object.move(speed,0);
if(dir == 'l')
    object.move(-speed,0);
}

void kidghost::getdirection() {
    if ((object.getPosition().x - initialPosition.x < 1) && dir == 'l')
        dir = 'r';
    if((initialPosition.x + 5 * 30) - object.getPosition().x < 1 && dir == 'r')
        dir = 'l';
}