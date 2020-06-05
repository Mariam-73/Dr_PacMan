#ifndef GAMES_TILE_MAP_H
#define GAMES_TILE_MAP_H
#include "SFML/Graphics.hpp"
#include "Load_Sprites.h"
#include "Collision_Tiles.h"

class Tile_Map : public sf::Drawable {
private:
    bool update;
    int x,y;
    Load_Sprites L1;
    int Level[29][22];
    sf::Sprite b_tiles;
    sf::VertexArray b_vertix;
    sf::Vector2u tileSize;
    sf::Vertex* quad;

public:
    //intializing, setting up and displaying tile map
    Tile_Map(int x, int y, int level[][22]);
    ~Tile_Map(){}

    void update_map(int i, int j);
    void make_map(void);
    void set_tiles(int, int);

    //friend classes
    friend void Collsion_Tiles::check_move(sf::Sprite &object, float z, Tile_Map& T1,int x,int y);
    friend void Collsion_Tiles::check_move(sf::Sprite &object,Tile_Map& T1);

private:
    virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const;
};


#endif //GAMES_TILE_MAP_H
