#ifndef BISHOP_H
#define BISHOP_H
#include "piece.h"

class Bishop : public Piece
{
public:
    Bishop();
    char getSign(){return sign;}

private:
    char sign = 'B';
};

#endif // BISHOP_H
