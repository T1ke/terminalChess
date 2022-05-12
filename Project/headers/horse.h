#ifndef HORSE_H
#define HORSE_H

#include "piece.h"

class Horse : public Piece
{
public:
    Horse();
    char getSign(){return sign;}

private:
    char sign = 'H';
};

#endif // HORSE_H
