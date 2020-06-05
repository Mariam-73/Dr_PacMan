#include "Collision_Tiles.h"
#include "Tile_Map.h"

Collsion_Tiles::Collsion_Tiles() {
    Score = 0;
    //Exception Handling
    try{if(!buffer.loadFromFile("water.wav")) {throw "water.wav";}}
    catch(const char* error){std::cout<<"water.wav";}

    sound.setBuffer(buffer);
    sound.setVolume(100);
}
void Collsion_Tiles:: check_move(sf::Sprite &object, float z,Tile_Map& T1,int x,int y) {

    //player collision detection and solution with
    //      1- Tiles to prevent movement
    //      2- Food to increase score
    float obj_hlf_x = object.getTexture()->getSize().x / 2 - x;
    float obj_hlf_y = object.getTexture()->getSize().y / 2 - y;

    sf::Text sc;
    int i,j;
    for (i = 0; i < 29; i++)
        for (j = 0; j < 22; j++) {
            sf::Vector2f cen(i * 30 + 15, j * 30 + 15);
            float delta_x = cen.x - object.getPosition().x;
            float delta_y = cen.y - object.getPosition().y;
            float Intersect_x = abs(delta_x) - (15 + obj_hlf_x);
            float Intersect_y = abs(delta_y) - (15 + obj_hlf_y);
            if (T1.Level[i][j] == 1) {
                if (Intersect_x < 0.0f && Intersect_y < 0.0f) {
                    if (Intersect_x > Intersect_y) {
                        if (delta_x > 0.0f)
                            object.move(Intersect_x * z, 0.0f);
                        else
                            object.move(-Intersect_x * z, 0.0f);
                    } else {
                        if (delta_y > 0.0f)
                            object.move(0, Intersect_y * z);
                        else
                            object.move(0, -Intersect_y * z);
                    }
                }
            }
            else if (T1.Level[i][j] >= 2 && T1.Level[i][j] <= 5) {
                if ((int)abs(delta_x)<=15 && (int)abs(delta_y) <= 15) {
                    T1.update_map(i,j);
                    sound.play();
                    sf::sleep(buffer.getDuration());
                    sound.stop();
                    Score +=10;
                }
            }
            else if (T1.Level[i][j] == 6) {
                if ((int)abs(delta_x)<=12 && (int)abs(delta_y) <= 12) {
                    T1.update_map(i,j);
                    sound.play();
                    sf::sleep(buffer.getDuration());
                    sound.stop();
                    Score +=5;
                }
            }

        }

}

int Collsion_Tiles::score() {
   return Score;
}


void Collsion_Tiles::check_move(sf::Sprite &object,Tile_Map &T1) {

    //Ghost collision detection to not allow movement
    int i, j;
    for (i = 0; i < 29; i++)
        for (j = 0; j < 22; j++) {
            if (T1.Level[i][j] == 1 || T1.Level[i][j] == 7) {
                sf::FloatRect cen(i * 30, j * 30, 30, 30);
                if (cen.contains(object.getPosition().x - 17, object.getPosition().y - 13)
                || cen.contains(object.getPosition().x - 17, object.getPosition().y + 13))
                    left = false;
                if (cen.contains(object.getPosition().x + 17, object.getPosition().y - 13)
                || cen.contains(object.getPosition().x + 17, object.getPosition().y + 13))
                    right = false;
                if (cen.contains(object.getPosition().x - 13, object.getPosition().y - 17)
                || cen.contains(object.getPosition().x + 13, object.getPosition().y - 17))
                    up = false;
                if (cen.contains(object.getPosition().x - 13, object.getPosition().y + 17)
                || cen.contains(object.getPosition().x + 13, object.getPosition().y + 17))
                    down = false;
            }
        }

}
void Collsion_Tiles::reset(void) {
    up = true;
    down = true;
    right = true;
    left = true;
}
