
#pragma once
#include <iostream>
#include "SFML/Audio.hpp"
#include <SFML/Graphics.hpp>
#include "GameState.h"
#include <string>
#include "Load_Sprites.h"

class initialBack: public GameState  {
private:

    //Display
    sf:: VertexArray screen;

public:
    initialBack();
    ~initialBack(){}
    virtual void draw();
    virtual void update(const float dt);
    virtual void handleInput();


};