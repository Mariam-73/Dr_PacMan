#include "initialBack.h"

initialBack::initialBack()
{
    //Setting window color
    screen.setPrimitiveType(sf::Quads);
    screen.resize(4);
    screen[0].position = sf::Vector2f(5.0f, 5.0f);
    screen[1].position = sf::Vector2f(5.0f, 655.0f);
    screen[2].position = sf::Vector2f(865.0f, 655.0f);
    screen[3].position = sf::Vector2f(865.0f, 5.0f);

    screen[0].color = sf::Color::Black;
    screen[1].color = sf::Color::Black;
    screen[2].color = sf::Color(0,50,50,200);
    screen[3].color = sf::Color(0,50,50,200);

}

void initialBack::handleInput()
{
    sf::Event event;

    while (game->window.pollEvent(event))
    {
        switch (event.type)
        {
            /* Close the window */
            case sf::Event::Closed:
                this->game->window.close();
                break;
        }
    }

}
void initialBack::update(const float dt)
{
    //empty
}

void initialBack::draw()
{
    game->window.draw(screen);
}


