#include "Object.h"

void Object::drawobject(sf::RenderWindow &window) {
    window.draw(object);
}


sf::Sprite& Object::getobject(void) {
    return object;
}

bool Object::getCollision(sf::Vector2f playerPosition) {
    return (abs(playerPosition.x - object.getPosition().x) > 14
             || abs(playerPosition.y - object.getPosition().y) > 14);
}

