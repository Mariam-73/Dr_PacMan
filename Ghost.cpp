#include "Object.h"
#include "Ghost.h"
#include <string>
#include "Collision_Tiles.h"
#include "Tile_Map.h"
#include <cmath>

Ghost::Ghost() {
object = *L2.getvr();
object.setPosition(555,360);
dir = 'u';
}

void Ghost::checkmoveobject(Collsion_Tiles &CT1,sf::Vector2f Player_Position, Tile_Map& T1) {
    char x;
    double d = 10000;
    double du = clac_distance(sf::Vector2f(object.getPosition().x, object.getPosition().y - 30), Player_Position);
    double dr = clac_distance(sf::Vector2f(object.getPosition().x + 30, object.getPosition().y), Player_Position);
    double dd = clac_distance(sf::Vector2f(object.getPosition().x, object.getPosition().y + 30), Player_Position);
    double dl = clac_distance(sf::Vector2f(object.getPosition().x - 30, object.getPosition().y), Player_Position);

        if (CT1.left && getdirection('l',CT1))
            if (dl < d) {
                d = dl;
                x = 'l';
            }
        if (CT1.right && getdirection('r',CT1))
            if (dr < d) {
                d = dr;
                x = 'r';
            }
        if (CT1.up && getdirection('u',CT1))
            if (du <= d) {
                d = du;
                x = 'u';
            }
        if (CT1.down && getdirection('d',CT1))
            if (dd <= d) {
                x = 'd';
                d = dd;
            }
        dir = x;
}

bool Ghost::getdirection(char x, Collsion_Tiles &CT1) {
    switch (x) {
        case 'u':
            return dir == 'd'? !CT1.down && !CT1.right && !CT1.left : true;
        case 'd':
            return dir == 'u'? !CT1.up && !CT1.right && !CT1.left : true;
        case 'r':
            return dir == 'l'? !CT1.down && !CT1.right && !CT1.up : true;
        case 'l':
            return dir == 'r'? !CT1.down && !CT1.up && !CT1.left : true;
    }
}



double Ghost::clac_distance(sf::Vector2f this_Position, sf::Vector2f Player_Position) {
    double delta_x;
    double delta_y;
    delta_x = abs(this_Position.x - Player_Position.x);
    delta_y = abs(this_Position.y - Player_Position.y);
    return sqrt(delta_x*delta_x+delta_y*delta_y);
}

void Ghost::moveobject(float speed) {
    switch (dir)
    {
        case 'u' :
            object.move(0,-speed);
            break;
        case 'd':
            object.move(0, speed);
            break;
        case 'r':
            object.move(speed, 0);
            break;
        case 'l':
            object.move(-speed, 0);
            break;
    }

}

bool Ghost::checkposition(void) {
    if(std::abs(int(object.getPosition().x) % 30) > 0)
        if(std::abs(int(object.getPosition().y) % 30) > 0)
            if(std::abs(object.getPosition().x / 15 - int(object.getPosition().x / 15))<=0.09)
                if(std::abs(object.getPosition().y / 15 - int(object.getPosition().y / 15))<=0.09)
                    return true;
    return false;
}

