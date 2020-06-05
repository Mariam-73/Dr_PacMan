#include "Object.h"
#include "Player.h"

Player::Player() {
    object=*L2.getcharacter();
    object.setPosition(70 ,360);
}
void Player::moveobject(float speed)  {

    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Up)) {
        object.move(0, -speed);
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Down)) {
        object.move(0, speed);
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Left)) {
        object.move(-speed, 0);
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Right)) {
        object.move(speed, 0);
    }
}

