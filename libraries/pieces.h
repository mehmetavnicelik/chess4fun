#include"base.h"

class Piece{
    public:
        virtual void move(char col,int row)=0;
        inline int get_row(){return row;}
        inline void set_row(int row){this->row=row;}
        inline int get_col(){return col;}
        inline void set_col(int col){this->col=col;}
        inline enumType get_type(){return this->type;}
        inline char get_char(){return char(this->type);}
    private:
        int row;
        int col;
        enumType type;
};
class Pawn:public Piece{
    public:
        virtual void move(char col,int row);        
    private:
};
class Rook:public Piece{
    private:
};
class Knight:public Piece{
    private:
};
class Bishop:public Piece{
    private:
};
class Queen:public Piece{
    private:
};
class King:public Piece{
    private:
};