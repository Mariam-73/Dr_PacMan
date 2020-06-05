#ifndef GAMES_GAMESTATE_H
#define GAMES_GAMESTATE_H

#include "game.h"
//Abstract Class
class GameState
{
public:
    Game* game;
public:
    GameState(){}
    ~GameState(){}
    virtual void draw() = 0;
    virtual void update(const float dt) = 0;
    virtual void handleInput() = 0;
};

#endif //GAMES_GAMESTATE_H
