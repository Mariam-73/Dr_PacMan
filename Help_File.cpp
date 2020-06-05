#include "MenuState.h"
#include "Help_File.h"

helps::helps(Game* game)
{
    this->game = game;

    initialBack();
    x = false;
    n = 0;

    //Text

    text[0]=*L1.getText();
    text[0].setPosition(10, 70);
    text[0].setCharacterSize(40);
    text[0].setOutlineThickness(2);
    text[0].setColor(sf::Color::White);
    text[1]=*L1.getText();
    text[1].setPosition(50, 110);
    text[1].setCharacterSize(20);
    text[1].setOutlineThickness(2);
    text[1].setColor(sf::Color::White);

    data[0] = "";
    data[1] = "";

    images[0]=*L1.getcharacter();
    images[1]=*L1.getvr();
    images[2]=*L1.getvy();
    images[3]=*L1.gettiles();
    images[4]=*L1.gettiles();

    helpBack.setTexture(L1.gethelpBack());


}

void helps::handleInput()
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
            case sf::Event::KeyPressed:
                if (event.key.code == sf::Keyboard::Escape)
                    game->pushState(new MenuState(game));
                break;
                }
        }
    }

void helps::update(const float dt)
{
    images[0].setPosition(354,238);
    images[1].setPosition(707,238);
    images[2].setPosition(753,238);
    images[3].setTextureRect(sf::IntRect(30,0,60,30));
    images[3].setPosition(732,283);
    images[4].setTextureRect(sf::IntRect(150,0,30,30));
    images[4].setPosition(534,283);

    helpBack.setSize(sf::Vector2f(870,660));
    helpBack.setPosition(0,0);

    ifstream outfile;
    outfile.open("Help.txt", ios::in);
    if (!outfile)
        cout << "No such file";
    else if(!x){
        char ch;
        while (!outfile.eof()) {
            outfile.get(ch);
            if(ch != '\n' && n == 0)
                data[0] =  data[0] + ch;
            else {
                data[1] = data[1] + ch;
                n++;
            }
        }
        x= true;

    }
    text[1].setString(data[1]);
    text[0].setString(data[0]);
}

void helps::draw()
{
    initialBack::draw();
    game->window.draw(helpBack);
    game->window.draw(text[1]);
    game->window.draw(text[0]);
    for(int i = 0; i<5;i++)
        game->window.draw(images[i]);

}



