#ifndef QUEEN_H
#define QUEEN_H

#include "piece.h"

class Queen : public Piece
{
public:
    Queen();
    ~Queen(){};

    void move();
    char getSign(){return sign;}
    bool movePossible(){return true;}

private:
    char sign = 'Q';
};

#endif // QUEEN_H
