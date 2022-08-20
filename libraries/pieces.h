#include"base.h"

class Piece{
    public:
        virtual void move()=0;
        inline int get_row(){return row;}
        inline void set_row(int row){this->row=row;}
        inline int get_col(){return col;}
        inline void set_col(int col){this->col=col;}
    private:
        int row;
        int col;
        enumType type= empty;
};
class Pawn:public Piece{
    private:
        enumType type= pawn;
};
class Rook:public Piece{
    private:
        enumType type= rook;
};
class Knight:public Piece{
    private:
        enumType type= rook;
};
class Bishop:public Piece{
    private:
        enumType type= bishop;
};
class Queen:public Piece{
    private:
        enumType type= queen;
};
class King:public Piece{
    private:
        enumType type= king;
};