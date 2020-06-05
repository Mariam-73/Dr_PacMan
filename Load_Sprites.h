#include "SFML/Graphics.hpp"
#include "SFML/Audio.hpp"
#ifndef GAMES_LOAD_SPRITES_H
#define GAMES_LOAD_SPRITES_H


class Load_Sprites {
private:

    //Textures, Sprites and Fonts
    sf:: Texture V_R;
    sf:: Texture V_Y;
    sf:: Texture V_G;
    sf:: Texture Character;
    sf:: Texture Tiles;
    sf:: Texture top;
    sf:: Texture menu_back;
    sf:: Texture end_rect;
    sf:: Texture helpBack;
    sf:: Sprite vr;
    sf:: Sprite vy;
    sf:: Sprite vg;
    sf:: Sprite character;
    sf:: Sprite tiles;
    sf:: Font font;
    sf:: Text text;
public:
    Load_Sprites(); //Loading Textures, Sprites and Fonts from files
    ~Load_Sprites(){}

    //Returning Textures, Sprites and Fonts
    sf::Texture* gethelpBack(void);
    sf::Texture* gettop(void);
    sf::Texture* getmenu_back(void);
    sf::Texture* getendrect(void);
    sf::Sprite* getvr(void);
    sf::Sprite* getvy(void);
    sf::Sprite* getvg(void);
    sf::Sprite* getcharacter(void);
    sf::Sprite* gettiles(void);
    sf::Text* getText(void);

};


#endif //GAMES_LOAD_SPRITES_H
