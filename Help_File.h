#pragma once
#include <iostream>
#include "SFML/Audio.hpp"
#include <SFML/Graphics.hpp>
#include "GameState.h"
#include "initialBack.h"
#include <string>
#include "Load_Sprites.h"
#include <fstream>
#include <string>
using namespace std;
//Managing Help section of game

class helps: public initialBack  {
private:

    Load_Sprites L1;
    int n;
    sf::Text text[2];
    std::string data[2];
    sf::Sprite images[5];
    sf::RectangleShape helpBack;
    bool x;

public:
    helps(Game* game);
    ~helps(){}
    void draw();
    void update(const float dt);
    void handleInput();


};
