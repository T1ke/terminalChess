#ifndef KING_H
#define KING_H

#include "piece.h"

class King : public Piece
{
public:
    King();
    char getSign(){return sign;}

private:
    char sign = 'K';
};

#endif // KING_H
