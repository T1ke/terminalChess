#include <iostream>
#include "piece.cpp"
#include "board.cpp"
#include "pawn.cpp"
#include "queen.cpp"
#include "bishop.cpp"
#include "horse.cpp"
#include "rook.cpp"
#include "king.cpp"


using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    Board gameBoard;

    std::cout << P << std::endl;
    bool gameOver = false;

    gameBoard.InstantiateBoard();
    while(!gameOver)
    {
       // gameBoard.InstantiateBoard();
        gameBoard.printBoard();
        gameOver = true;
    }
    return 0;
}
