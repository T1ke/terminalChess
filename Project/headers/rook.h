#ifndef ROOK_H
#define ROOK_H


#include "piece.h"

class Rook : public Piece
{
public:
    Rook();
    char getSign(){return sign;}

private:
    char sign = 'R';
};

#endif // ROOK_H
