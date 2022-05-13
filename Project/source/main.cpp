#include <iostream>
#include <cctype>
#include <algorithm>

#include "piece.cpp"
#include "board.cpp"
#include "pawn.cpp"
#include "queen.cpp"
#include "bishop.cpp"
#include "horse.cpp"
#include "rook.cpp"
#include "king.cpp"


using namespace std;
std::string cmdToLower(std::string cmd)
{

    std::string msg= cmd;
    std::transform(msg.begin(), msg.end(), msg.begin(),
        [](unsigned char c){ return std::tolower(c); });
    return msg;
}

std::string hor = "abcdefg";
std::string vert = "12345678";

typedef std::pair<std::string,std::string> movecmd;

std::vector<movecmd> moveHistory;
std::string HELPMSG = "commands H \n MOVE ETC";
std::string WRONGCMD = "Wrong command. type [h]elp to find correct commmands!";

bool properCommand(std::string cmd)
{
    return true;
}

bool movePossible(movecmd m, Board b)
{
    return true;
}

movecmd getMoveCmd(std::string cmd)
{
     movecmd m;

     if(cmd == "o-o-o")
     {
         //long castle
         //TODO later
     }
     else if(cmd == "o-o")
     {
         //short castle
         //TODO LATER
     }
     int index = 0;
     bool specialEvent = false;
     for(auto i:cmd)
     {
         if(hor.find(i) != std::string::npos && index%2 == 0)
         {
             std::cout << i <<" found" << std::endl;
         }
         else if(vert.find(i) != std::string::npos && index%2 != 0)
         {
             std::cout << i << " number found" << std::endl;
         }
         else if(index == 2 && i =='x')
         {
             //ignore special occasions, focus on normal moves a4b2 example
             std::cout << " eating a piece hjappened " << std::endl;
             index--;
             specialEvent = true;
         }
         else
         {
             std::cout << "wrnog command! " << std::endl;
             m.first = "0";
             return m;
         }
        index++;
     }
     std::string first;
     std::string second;
     if(!specialEvent)
     {
        first.push_back(cmd[0]);
        first.push_back(cmd[1]);

        second.push_back(cmd[2]);
        second.push_back(cmd[3]);
     }
     else
     {//special happened and to accordingly

     }
     m.first = first;
     m.second = second;
     return m;
}

void printMoveHistory()
{

}

int main()
{
    cout << "Hello World!" << endl;
    Board gameBoard;

    std::cout << P << std::endl;
    bool gameOver = false;

    gameBoard.InstantiateBoard();
    gameBoard.printBoard();

    while(!gameOver)
    {
      //  cout << "\033[2J\033[1;1H";
       // std::system("clear");
        gameBoard.printBoard();
        std::string cmd;

        std::cout << "> ";
        std::getline(std::cin,cmd);
        cmd = cmdToLower(cmd); // cmd to lower case
        if(cmd == "exit" || cmd == "e")
        {
            gameOver = true;
        }
        else if(cmd == "h" || cmd == "help")
        {
            std::cout << HELPMSG << std::endl;
        }
        else if(cmd == "history")
        {
            printMoveHistory();
        }
        else if (properCommand(cmd))
        {
            movecmd m =getMoveCmd(cmd);
            if(m.first =="0")
            {
                std::cout << "Not a proper move command, try another" << std::endl;
            }
            else if(movePossible(m, gameBoard))
            {
                moveHistory.push_back(m);
            }
            else
            {
                std::cout << "Move not possible! No moves haev been done" << std::endl;
            }
           // std::system("clear");
        }
        else
        {
            std::cout << WRONGCMD << std::endl;
        }

    }
    return 0;
}
