#ifndef PAWN_H
#define PAWN_H
#include "piece.h"

class Pawn : public Piece
{
public:
    Pawn();
    ~Pawn() {};

    void move();
    char getSign() { return sign;}
    bool movePossible(){return true;};

private:
    char sign = 'P';
};

#endif // PAWN_H
