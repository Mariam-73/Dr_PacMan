#pragma  once

class Object;
class Player: public Object {
public:
    Player();
    ~Player(){}
    void moveobject(float speed); //moving player as input received
};

