#include "SFML/Graphics.hpp"
#include "game.h"
#include "GameState.h"
#include <iostream>

Game::Game()
{
    window.create(sf::VideoMode(870, 660), "Lets", sf::Style::Close);
   // window.setFramerateLimit(200);
}
Game::~Game()
{
    while (!states.empty())
        popState();
}
void Game::gameLoop()
{
    sf::Clock clock;

    while (window.isOpen())
    {
        //control frame rate
        sf::Time elapsed = clock.restart();
        float dt = elapsed.asSeconds();

        //clear window
        window.clear(sf::Color(75,35,60,50));

        //exception handling
        if (CurrentState() == nullptr)
            continue;

        //get user input for current game state
        CurrentState()->handleInput();

        //draw anything in the current game state
        CurrentState()->draw();

        //update anything neccessary
        CurrentState()->update(dt);

        window.display();
    }
}
void Game::pushState(GameState* state)
{
    states.push_back(state);

}
void Game::popState()
{
    states.back();
    delete states.back();
    states.pop_back();
}
GameState* Game::CurrentState()
{
    if (states.empty())
        return nullptr;
    else
        return states.back();
}


