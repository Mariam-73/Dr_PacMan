#pragma once
#include <iostream>
#include "SFML/Audio.hpp"
#include <SFML/Graphics.hpp>
#include "GameState.h"
#include <string>
#include "Load_Sprites.h"
#include "initialBack.h"

class MenuState: public initialBack {
private:

    //Sound
    sf:: SoundBuffer buffer;
    sf:: Sound sound;

    //Display
    sf::RectangleShape menu_back;
    Load_Sprites L1;
    std::vector<sf::Text> buttons;
    sf::Text text[2];
    std::string Help;
    const int NUM_BUTTONS ;


private:
    bool isTextClicked(sf::Text text); //To check if button is clicked
    void loadgame(); // go to play state
    void help(); // Display help

public:
    MenuState(Game* game);
    ~MenuState(){}

    //Virtual functions implementation
    void draw();
    void update(const float dt);
    void handleInput();


};

