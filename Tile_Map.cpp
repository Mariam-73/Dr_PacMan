#include "Tile_Map.h"
#include "Player.h"
#include <iostream>

Tile_Map::Tile_Map(int x, int y,int (*level)[22]) {

    update = false;
    this ->x = x;
    this ->y = y;
    for (int i = 0; i < this->x; i++)
        for (int j = 0; j <this -> y; j++)
        {
            Level[i][j]=level[i][j];
        }
    b_vertix.setPrimitiveType(sf::Quads);
    b_vertix.resize(this->x * this->y * 4);
    b_tiles = *L1.gettiles();
    tileSize = sf::Vector2u(30,30);
}

void Tile_Map::make_map(void) {

    for (int i = 0; i < x; i++)
        for (int j = 0; j < y; j++){
                quad=&b_vertix[(i+j*x)*4];
                set_tiles(i,j);
        }
}


void Tile_Map::set_tiles(int i, int j) {
    quad[0].position = sf::Vector2f(i * tileSize.x, j * tileSize.y);
    quad[1].position = sf::Vector2f((i + 1) * tileSize.x, j * tileSize.y);
    quad[2].position = sf::Vector2f((i + 1) * tileSize.x, (j + 1) * tileSize.y);
    quad[3].position = sf::Vector2f(i * tileSize.x, (j + 1) * tileSize.y);


    int tu = Level[i][j]-1;
    int tv = 0;

    quad[0].texCoords = sf::Vector2f(tu * tileSize.x, tv * tileSize.y);
    quad[1].texCoords = sf::Vector2f((tu + 1) * tileSize.x, tv * tileSize.y);
    quad[2].texCoords = sf::Vector2f((tu + 1) * tileSize.x, (tv + 1) * tileSize.y);
    quad[3].texCoords = sf::Vector2f(tu * tileSize.x, (tv + 1) * tileSize.y);


}
void Tile_Map::update_map(int i, int j) {
    Level[i][j]=0;
    make_map();

}
void Tile_Map::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    states.texture = b_tiles.getTexture();
    target.draw(b_vertix, states);
}





