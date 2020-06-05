#pragma once
#ifndef OOP_PROJECT_PLAYSTATE_H
#define OOP_PROJECT_PLAYSTATE_H
#include <iostream>
#include <ctime>
#include <string>
#include <SFML/Graphics.hpp>
#include "SFML/Audio.hpp"
#include "Load_Sprites.h"
#include "Tile_Map.h"
#include "Collision_Tiles.h"
#include "Object.h"
#include "Player.h"
#include "Ghost.h"
#include "Ghost3.h"
#include "kidghost.h"
#include "MenuState.h"
#include "GameState.h"
#include <fstream>

using namespace std;

class PlayState : public GameState
{
private:
    //Map
    int Level[29][22] {{0, 0,  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                       {0, 0,  1, 6, 6, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 6, 6, 1},
                       {0, 0,  1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 1},
                       {0, 0,  1, 6, 0, 0, 0, 0, 0, 0, 0, 1, 3, 0, 0, 0, 0, 0, 0, 0, 6, 1},
                       {0, 0,  1, 0, 6, 1, 1, 1, 1, 0, 0, 2, 1, 0, 0, 1, 1, 1, 1, 6, 0, 1},
                       {0, 0,  1, 0, 6, 1, 6, 2, 1, 0, 0, 1, 3, 0, 0, 1, 3, 6, 1, 6, 0, 1},
                       {0, 0,  1, 0, 6, 7, 6, 2, 1, 0, 0, 0, 0, 0, 0, 1, 3, 6, 7, 6, 0, 1},
                       {0, 0,  1, 0, 6, 7, 6, 2, 1, 0, 0, 2, 1, 0, 0, 1, 3, 6, 7, 6, 0, 1},
                       {0, 0,  1, 0, 6, 1, 6, 2, 1, 0, 0, 1, 3, 0, 0, 1, 3, 6, 1, 6, 0, 1},
                       {0, 0,  1, 0, 6, 1, 1, 1, 1, 0, 0, 2, 1, 0, 0, 1, 1, 1, 1, 6, 0, 1},
                       {0, 0,  1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
                       {0, 0,  1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 3, 0, 0, 0, 0, 0, 0, 0, 0, 1},
                       {0, 0,  1, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
                       {0, 0,  1, 0, 1, 1, 1, 1, 1, 1, 0, 1, 3, 0, 1, 1, 1, 1, 1, 1, 0, 1},
                       {0, 0,  1, 0, 6, 6, 6, 6, 6, 6, 0, 0, 0, 0, 6, 6, 6, 6, 6, 6, 0, 1},
                       {0, 0,  1, 0, 1, 1, 1, 1, 1, 1, 0, 1, 3, 0, 1, 1, 1, 1, 1, 1, 0, 1},
                       {0, 0,  1, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
                       {0, 0,  1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 3, 0, 0, 0, 0, 0, 0, 0, 0, 1},
                       {0, 0,  1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
                       {0, 0,  1, 0, 6, 1, 1, 1, 1, 0, 0, 2, 1, 0, 0, 1, 1, 1, 1, 6, 0, 1},
                       {0, 0,  1, 0, 6, 1, 6, 2, 1, 0, 0, 1, 3, 0, 0, 1, 3, 6, 1, 6, 0, 1},
                       {0, 0,  1, 0, 6, 7, 6, 2, 1, 0, 0, 2, 1, 0, 0, 1, 3, 6, 7, 6, 0, 1},
                       {0, 0,  1, 0, 6, 7, 6, 2, 1, 0, 0, 0, 0, 0, 0, 1, 3, 6, 7, 6, 0, 1},
                       {0, 0,  1, 0, 6, 1, 6, 2, 1, 0, 0, 1, 3, 0, 0, 1, 3, 6, 1, 6, 0, 1},
                       {0, 0,  1, 0, 6, 1, 1, 1, 1, 0, 0, 2, 1, 0, 0, 1, 1, 1, 1, 6, 0, 1},
                       {0, 0,  1, 6, 0, 0, 0, 0, 0, 0, 0, 1, 3, 0, 0, 0, 0, 0, 0, 0, 6, 1},
                       {0, 0,  1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 1},
                       {0, 0,  1, 6, 6, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 6, 6, 1},
                       {0, 0,  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}};

    //Sounds
    sf:: SoundBuffer bufferloose;
    sf:: SoundBuffer bufferwin;
    sf:: Sound soundloose;
    sf:: Sound soundwin;
    sf:: SoundBuffer buffer;
    sf:: Sound sound;

    //Setting player and ghosts
    Player p1;
    Ghost g1;
    Object* KG[5];

    //Setting Tile Map
    Load_Sprites L2;
    Collsion_Tiles MCP;
    Tile_Map M1{29,22,Level};
    sf::RectangleShape top;
    sf::RectangleShape end;


    sf::Text Score,time,timedisplay,exit,pause,scoreDisplay,topScore;
    string timeDisplay,TopScore,Data;
    float timer;
    bool Pause;
    bool PlayerState;
    bool gameStarted;
    static int stages;
    static int totalScore;
    ifstream ofile;
    ofstream ifile;
    char ch;

    //speed
    const float playerSpeed;
    const float ghostSpeed;
    const float kidGhostSpeed;
    const float ghost3Speed;


public:
    PlayState(Game* game);
    ~PlayState(){}

    //Virtual function implementation
    void draw();
    void update(const float dt);
    void handleInput();

private:
    //Pause the game
    void PauseGame();

    //End of Game
    void EndGame();
    void Winning();

    //Go to MenuState
    void ReturnMenu();

    //Managing Display
    void setrect();
    void dispExit();
    void dispStart();

    //Managing game stage
    bool stage2Collision();
    void stage2move(double speed);
    void stage2draw();
    bool stage3Collision();
    void stage3move(double speed);
    void stage3draw();
    void newLevel();
    void stage();

    //Managing start of each level
    void StartGame();

    // read and write scores from and to file
    void gettopscore();
    void settopscore();

};


#endif //OOP_PROJECT_PLAYSTATE_H
