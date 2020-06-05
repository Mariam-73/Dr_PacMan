
#include "PlayState.h"

#include "GameState.h"

PlayState::PlayState(Game* game) : kidGhostSpeed(5),playerSpeed(90),ghostSpeed(2.5),ghost3Speed(0)
{
    this->game = game;

    //sound
    bufferloose.loadFromFile("gameover.wav");
    bufferwin.loadFromFile("win.wav");
    soundloose.setBuffer(bufferloose);
    soundwin.setBuffer(bufferwin);
    soundloose.setVolume(100);
    soundwin.setVolume(100);
    buffer.loadFromFile("kick.wav");
    sound.setBuffer(buffer);
    sound.setVolume(100);

    //Score Board
    top.setSize(sf::Vector2f(870,60));
    top.setPosition(0,0);
    top.setTexture(L2.gettop());

    //setting score and time
    Score = *L2.getText();
    exit = *L2.getText();
    time = *L2.getText();
    timedisplay = *L2.getText();
    topScore = *L2.getText();
    pause = *L2.getText();
    scoreDisplay = *L2.getText();

    Score.setString("Score: ");
    Score.setPosition(10,10);
    topScore.setPosition(400,10);
    time.setString("Time: ");
    time.setPosition(220,10);
    exit.setString("ESC to EXIT");
    exit.setPosition(727,28);
    exit.setCharacterSize(20);
    pause.setString("Press SPACE to PAUSE");
    pause.setPosition(650,5);
    pause.setCharacterSize(20);


    //Declaring Dynaminc Objects of Ghost Dependig on player Level
    if(stages>=2) {

        KG[0] = new kidghost{sf::Vector2f(135, 135), 1}; //TL
        KG[1] = new kidghost{sf::Vector2f(735, 135), 0}; //TR
        KG[2] = new kidghost{sf::Vector2f(135, 585), 1}; //BL
        KG[3] = new kidghost{sf::Vector2f(735, 585), 0}; //BR

    }
    if(stages==3)
        KG[4] = new Ghost3;


    //initializing values
    PlayerState=true;
    Pause = false;
    gameStarted = false;
    TopScore = "0";
    Data = "0";
    timer = 0;
}

void PlayState::handleInput()
{
    sf::Event event;
    while (this->game->window.pollEvent(event))
    {
        switch (event.type)
        {
            /* Close the window */
            case sf::Event::Closed:
                this->game->window.close();
                break;

                //Check if some key is pressed
            case sf::Event::KeyPressed:
                if (event.key.code == sf::Keyboard::Escape) {
                    sound.play();
                    stages = 1;
                    ReturnMenu();
                }
                if (event.key.code == sf::Keyboard::Space) {
                    if (PlayerState)
                        sound.play();
                        PauseGame();
                }
                if (event.key.code == sf::Keyboard::Enter) {
                    if (!gameStarted) {
                        sound.play();
                        StartGame();
                    }
                }
                break;
        }
    }


}

void PlayState::update(const float dt) {
    gettopscore();
    if(!gameStarted)
        stage();
    else{
        if (!Pause) {
            MCP.check_move(p1.getobject(), .5, M1, 3, 3);
            if (g1.getCollision(p1.getobject().getPosition()) && stage2Collision() && stage3Collision()) {
                if (MCP.score() >= 700) {
                    if (stages == 3)
                        Winning();
                    else
                        newLevel();
                } else {
                    MCP.reset();
                    //Managing movement of characters
                    p1.moveobject(playerSpeed * dt);
                    if (stages >= 2)
                        stage2move(kidGhostSpeed * dt);
                    if(stages==3) {
                        if(KG[4]->checkposition()){
                            MCP.check_move(KG[4]->getobject(), M1);
                            float x_1;
                            float y_1;
                            x_1 = abs(p1.getobject().getPosition().x + g1.getobject().getPosition().x) * .75;
                            y_1 = abs(p1.getobject().getPosition().y + g1.getobject().getPosition().y) * .75;
                            sf::Vector2f midp_g(x_1,y_1);
                            KG[4]->checkmoveobject(MCP, midp_g, M1);
                        }
                        stage3move(ghost3Speed * dt);
                    }
                    if (g1.checkposition()) {
                        MCP.check_move(g1.getobject(), M1);
                        g1.checkmoveobject(MCP, p1.getobject().getPosition(), M1);
                    }
                    g1.moveobject(ghostSpeed * dt);
                    timer += dt;
                }
            } else {
                EndGame();
            }
            timeDisplay = to_string((int) timer);
            timedisplay.setString(timeDisplay);
            timedisplay.setPosition(310, 10);
            scoreDisplay.setString(to_string(MCP.score()));
            scoreDisplay.setPosition(100, 10);
        }
    }
}

void PlayState::draw()
{
    this->game->window.clear(sf::Color(10, 15, 25, 200));
    M1.make_map();
    game->window.draw(M1);
    game->window.draw(top);
    game->window.draw(Score);
    game->window.draw(topScore);
    game->window.draw(time);
    p1.drawobject(game->window);
    g1.drawobject(game->window);
    if(stages>=2)
        stage2draw();

    if(stages==3)
        stage3draw();
    game->window.draw(timedisplay);
    game->window.draw(scoreDisplay);
    game->window.draw(exit);
    game->window.draw(pause);

}

void PlayState::setrect() {
    end.setSize(sf::Vector2f(390,180));
    end.setOrigin(180,90);
    end.setPosition(435,360);
    end.setTexture(L2.getendrect());
    game->window.draw(end);

}

void PlayState::dispExit() {
    sf::Text z;
    z = *L2.getText();
    z.setPosition(290,390);
    z.setFillColor(sf::Color::White);
    z.setCharacterSize(20);
    z.setString("Press ESC to return to Main Menu");
    game->window.draw(z);
}
void PlayState::dispStart() {
    sf::Text z;
    z = *L2.getText();
    z.setPosition(350,370);
    z.setFillColor(sf::Color::White);
    z.setCharacterSize(20);
    z.setString("Press Enter to Start");
    game->window.draw(z);
}

void PlayState::PauseGame()
{
    Pause= !Pause;
}

void PlayState::EndGame() {
    if (PlayerState)
    {
        totalScore=totalScore+MCP.score();
        settopscore();
        soundloose.play();// Condition makes sure sound only plays once
        PlayerState = false;
    }

    setrect();
    dispExit();
    sf::Text z[2];
    for(int i = 0; i<2;i++)
    {
        z[i] = *L2.getText();
        z[i].setFillColor(sf::Color::White);
    }
    z[1].setPosition(295,300);
    z[1].setOutlineThickness(3);
    z[1].setCharacterSize(60);
    z[1].setString("Game Over");

    z[0].setPosition(345,360);
    z[0].setOutlineThickness(1);
    z[0].setCharacterSize(25);
    z[0].setString("Your Total Score: " + to_string(totalScore));

    game->window.draw(z[1]);
    game->window.draw(z[0]);

}

void PlayState::Winning() {
    if (PlayerState)
    {
        totalScore=totalScore+MCP.score();
        settopscore();
        soundwin.play();       // Condition makes sure sound only plays once
        PlayerState = false;
    }
    setrect();
    dispExit();
    sf::Text z;
    z = *L2.getText();
    z.setFillColor(sf::Color::White);
    z.setPosition(330,300);
    z.setOutlineThickness(3);
    z.setCharacterSize(60);
    z.setString("You Won");
    game->window.draw(z);

}

void PlayState::ReturnMenu() {
    totalScore=0;
    game->pushState(new MenuState(game));
}

int  PlayState :: stages = 3;
int  PlayState :: totalScore = 0;

bool PlayState::stage2Collision(void) {
   return stages >=2? KG[0]->getCollision(p1.getobject().getPosition())
        && KG[1]->getCollision(p1.getobject().getPosition())
        && KG[2]->getCollision(p1.getobject().getPosition())
        && KG[3]->getCollision(p1.getobject().getPosition()): true;
}

void PlayState::stage2move(double speed) {
    for(int i = 0; i<4;i++)
        KG[i]->moveobject(speed);

}

void PlayState::stage2draw(void) {
    for(int i = 0; i<4;i++)
        KG[i]->drawobject(game->window);
}

bool PlayState::stage3Collision(void) {
    return stages ==3? KG[4]->getCollision(p1.getobject().getPosition()): true;
}

void PlayState::stage3move(double speed) {
        KG[4]->moveobject(speed);

}

void PlayState::stage3draw(void) {
        KG[4]->drawobject(game->window);
}




void PlayState::newLevel() {
    totalScore=totalScore+MCP.score();
    stages++;
    game->pushState(new PlayState(game));
}

void PlayState::stage() {
        sf::Text z;
        z = *L2.getText();
        z.setPosition(350, 310);
        z.setOutlineThickness(3);
        z.setCharacterSize(60);
        z.setString("Level "+to_string(stages));
        z.setFillColor(sf::Color::White);
        setrect();
        dispStart();
        dispExit();
        game->window.draw(z);
}

void PlayState::StartGame() {
    gameStarted = true;
}

void PlayState::gettopscore() {
    ofile.open("Score.txt", ios::in);
    if (!ofile)
        cout << "No such file";
    else {
        while (!ofile.eof()) {
            ofile.get(ch);
            if(ch != '*')
                Data = Data + ch;
            else {
                TopScore = to_string(max(stoi(TopScore), stoi(Data)));
                Data = "0";
            }
        }
    }
    ofile.close();
    topScore.setString("TopScore: " + TopScore);
}

void PlayState::settopscore() {
    ifile.open("Score.txt", ios::app);
    if (!ifile)
        cout << "No such file";
    else {
        ifile << to_string(totalScore)<<'*';
    }
    ifile.close();

    if(totalScore == 2100)
    {
        ifile.open("Score.txt", ios::trunc);
        ifile.close();
    }


}



