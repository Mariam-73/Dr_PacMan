#include "MenuState.h"
#include "PlayState.h"
#include "SFML/System.hpp"
#include "Help_File.h"
MenuState::MenuState(Game* game):NUM_BUTTONS(3)
{
    this->game = game;

    initialBack();

    //audio
    buffer.loadFromFile("kick.wav");
    sound.setBuffer(buffer);
    sound.setVolume(100);

    //Setting up window background
    menu_back.setPosition(215,75);
    menu_back.setSize(sf::Vector2f(650,580));
    menu_back.setTexture(L1.getmenu_back());

    //Text
    text[0]=*L1.getText();
    text[0].setPosition(270, 50);
    text[0].setCharacterSize(60);
    text[0].setOutlineThickness(4);
    text[0].setColor(sf::Color::White);   // set the color
    text[1]=*L1.getText();
    text[1].setPosition(50, 200);
    text[1].setCharacterSize(40);
    text[1].setOutlineThickness(2);
    text[1].setColor(sf::Color::White);   // set the color

    //set positions of things
    for (int i = 0; i < NUM_BUTTONS; i++)
    {
        buttons.push_back(text[1]);
        buttons[i].setPosition(text[1].getPosition().x , text[1].getPosition().y + i * 140);
    }
    //set text
    buttons[0].setString("Play Game");
    buttons[1].setString("    Help ");
    buttons[2].setString("    Quit ");
    text[0].setString("Dr.PacMan");

}

void MenuState::handleInput()
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

                /* Change Between game states */
            case sf::Event::KeyPressed:
                if (event.key.code == sf::Keyboard::Escape)
                    this->game->window.close();
                else if (event.key.code == sf::Keyboard::Return)
                    //loadgame();
                break;
                //check if text is hovered over
            case sf::Event::MouseMoved:
                isTextClicked(buttons[0])?
                buttons[0].setColor(sf::Color::Red):buttons[0].setColor(sf::Color::White);

                isTextClicked(buttons[1])?
                buttons[1].setColor(sf::Color::Red):buttons[1].setColor(sf::Color::White);

                isTextClicked(buttons[2])?
                buttons[2].setColor(sf::Color::Red):buttons[2].setColor(sf::Color::White);
                break;

        }
    }
    if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
    {

        if (isTextClicked(buttons[0])) {
            sound.play();
            loadgame();
        }
        else if (isTextClicked(buttons[1])) {
            sound.play();
            help();
        }
        else if (isTextClicked(buttons[2])) {
            sound.play();
            sf::sleep(buffer.getDuration());
            game->window.close();
        }
    }
}
void MenuState::update(const float dt)
{
    //empty
}

void MenuState::draw()
{
    initialBack::draw();
    game->window.draw(menu_back);
    game->window.draw(text[0]);
    for (auto x : buttons)
        game->window.draw(x);
}

void MenuState::loadgame()
{
    game->pushState(new PlayState(game));
}

bool MenuState::isTextClicked(sf::Text text) {
    sf::IntRect rect(text.getPosition().x, text.getPosition().y, text.getGlobalBounds().width, text.getGlobalBounds().height);
    return rect.contains(sf::Mouse::getPosition(game->window));
}

void MenuState::help() {
    game->pushState(new helps(game));
}

