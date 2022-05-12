#ifndef BOARD_H
#define BOARD_H
#include <cstdint>
#include <stddef.h>
#include <vector>
#include "piece.h"
#include <memory>
#include "pawn.h"
#include "queen.h"
#include "bishop.h"
#include "horse.h"
#include "king.h"
#include "rook.h"


typedef std::pair<uint8_t,uint8_t> grid;

class Board
{    
    struct Grid {
        unsigned short int posX;
        unsigned short int posY;
        Piece* occupied = NULL;
    };

public:
    Board(size_t=8,size_t=8);
    void InstantiateBoard();
    void printBoard();
private:
    size_t sizeY;
    size_t sizeX;
    std::vector<Grid> board;
};

#endif // BOARD_H
