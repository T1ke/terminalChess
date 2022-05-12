#include "../headers/board.h"
#include <iostream>
#include <vector>


Board::Board(size_t y_,size_t x_)
{
    std::cout << "Board class initiated!" << std::endl;
    sizeX = x_;
    sizeY = y_;
}

void Board::InstantiateBoard()
{
    for(int i = 0; i < sizeY;i++)
    {
        for (int j = 0; j < sizeX;j++)
        {
           // std::unique_ptr<Grid> gr (new Grid());//=  std::make_unique<Grid>();
            Grid gr;
          //  Grid gr;
            //std::unique_ptr<Grid> gr;
            gr.posX = j;
            gr.posY = i;
            if(i == 1 || i == 6)
            {
                gr.occupied = new Pawn();
            }
            else if(i==0 && j == 3 || i==7 &&j==3)

            {
                gr.occupied = new Queen();
            }
            else if(i==0 && j == 4 || i ==7 && j==4)
            {
                gr.occupied = new King();
            }
            else if(i==0 && (j == 0 || j == 7) || i == 7 && (j==0 || j==7))
            {
                gr.occupied = new Rook();
            }
            else if(i == 0 && (j == 1 || j == 6) || i == 7 && (j==1 || j==6))
            {
                gr.occupied = new Bishop();
            }
            else if ( i== 0 && (j == 2 || j == 5) || i == 7 && (j==2 || j==5))
            {
                gr.occupied = new Horse();
            }

            board.push_back(gr);
        }
    }
}

void Board::printBoard()
{
    int index = 0;
    std::cout << "Printing the board! " << std::endl;

    std::cout << "\tA\tB\tC\tD\tE\tF\tG\tH\n" << std::endl;
    for(int i = 0; i < sizeY; i++)
    {
        std::cout << i;
        for (int j = 0; j < sizeX;j++)
        {
            if(board.at(index).occupied!= NULL)
            {
            std::cout << "\t" << board.at(index).occupied->getSign();
            }
            else

            {
                std::cout << "\t" << "0";
            }
            index++;
        }
        std::cout <<std::endl;
        std::cout <<std::endl;
    }
    std::cout << std::endl;
}
