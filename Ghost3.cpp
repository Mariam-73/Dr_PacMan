#include "Object.h"
#include "Ghost.h"
#include "Ghost3.h"
#include "time.h"

Ghost3::Ghost3() {
    object = *L2.getvy();
    object.setPosition(555,360);
    dir='d';
    srand(time(NULL));
}

void Ghost3::checkmoveobject(Collsion_Tiles &CT1, sf::Vector2f Player_Position, Tile_Map &T1) {
sf::Vector2f PlayerPosition;
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Up)) {
        PlayerPosition.y = Player_Position.y-30;
        PlayerPosition.x = Player_Position.x;
    } else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Down)) {
        PlayerPosition.y = Player_Position.y+30 ;
        PlayerPosition.x = Player_Position.x;
    } else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Left)) {
        PlayerPosition.y = Player_Position.y;
        PlayerPosition.x = Player_Position.x-30;
    } else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Right)) {
        PlayerPosition.y = Player_Position.y+30;
        PlayerPosition.x = Player_Position.x;
    }
    Ghost::checkmoveobject(CT1, PlayerPosition, T1);
}
