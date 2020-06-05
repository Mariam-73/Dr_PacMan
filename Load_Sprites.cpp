#include "Load_Sprites.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
Load_Sprites::Load_Sprites()
{
    try {
        if (!V_R.loadFromFile("C_RED.png")) { throw "C_RED.png"; }
        if (!V_Y.loadFromFile("C_Yellow.png")) { throw "C_Yellow.png"; }
        if (!Character.loadFromFile("front.png")) { throw "front.png"; }
        if (!Tiles.loadFromFile("water.png")) { throw "water.png"; }
        if (!top.loadFromFile("top.png")) { throw "top.png"; }
        if (!helpBack.loadFromFile("virus.png")) { throw "virus.png"; }
        if (!font.loadFromFile("Times_New_Roman_Bold.ttf")) { throw "Times_New_Roman_Bold.png"; }
        if (!menu_back.loadFromFile("background.png")) { throw "background.png"; }
        if (!end_rect.loadFromFile("endrect.png")) { throw "endrect.png"; }
        if (!V_G.loadFromFile("vg1.png")) { throw "vg1.png"; }
    }
    catch (const char* error)
    {
        std::cout<<"File causing error: "<<error;
    }
    vr.setTexture(V_R);
    vg.setTexture(V_G);
    vy.setTexture(V_Y);
    character.setTexture(Character);
    tiles.setTexture(Tiles);
    text.setFont(font);

}

sf::Sprite *Load_Sprites::getvr(void) {
    vr.setOrigin(sf::Vector2f(vr.getTexture()->getSize().x*0.5,vr.getTexture()->getSize().y*0.5));
    return &vr;
}


sf::Sprite *Load_Sprites::getcharacter(void) {
    character.setOrigin(sf::Vector2f(character.getTexture()->getSize().x*0.5,character.getTexture()->getSize().y*0.5));
    return &character;
}


sf::Sprite *Load_Sprites::gettiles(void) {
    tiles.setOrigin(sf::Vector2f(tiles.getTexture()->getSize().x*0.5,tiles.getTexture()->getSize().y*0.5));
    return &tiles;
}

sf::Texture* Load_Sprites::gettop(void) {
    return &top;
}

sf::Text *Load_Sprites::getText(void) {
    text.setFillColor(sf::Color(100,10,20,250));
    text.setCharacterSize(30);
    text.setOutlineThickness(1);
    return &text;
}

sf::Texture* Load_Sprites::getmenu_back(void) {
    return &menu_back;
}

sf::Texture *Load_Sprites::getendrect(void) {
    return &end_rect;
}

sf::Sprite *Load_Sprites::getvy(void) {
    vy.setOrigin(sf::Vector2f(vy.getTexture()->getSize().x*0.5,vy.getTexture()->getSize().y*0.5));
    return &vy;
}

sf::Texture *Load_Sprites::gethelpBack(void) {
    return &helpBack;
}

sf::Sprite *Load_Sprites::getvg(void) {
    vg.setOrigin(sf::Vector2f(vg.getTexture()->getSize().x*0.5,vg.getTexture()->getSize().y*0.5));
    return &vg;
}





