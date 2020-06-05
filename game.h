#ifndef GAMES_GAME_H
#define GAMES_GAME_H

#include <vector>
#include "SFML/Graphics.hpp"

class GameState;

class Game{
public:
    //sfml window
    sf::RenderWindow window;
private:
    std::vector<GameState*> states;


public:
    //constructor and destructor
    Game();
    ~Game();

    //functions for changing game state
    void pushState(GameState* state);
    void popState();

    //function to get the current State (note this function must be a pointer)
    GameState* CurrentState();

    //game loop function
    void gameLoop();

};
#endif //GAMES_GAME_H
