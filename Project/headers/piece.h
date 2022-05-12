#ifndef PIECE_H
#define PIECE_H

enum PieceColour {White = 0,
                  Black = 1};

enum PieceSign {K,Q,H,B,R,P};



class Piece
{

    /*virtual void move();
    virtual char getSign();
    virtual bool movePossible();
    virtual bool check();
    virtual bool checkMate();
*/

public:
    Piece();
    virtual ~Piece();

    virtual char getSign() {return sign;};

private:
    char color;
    char sign = 'E';
};

#endif // PIECE_H
