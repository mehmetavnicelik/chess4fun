#include"base.h"

class Cell{
    public:
        inline int get_row(){return this->row;}
        inline void set_row(int row){this->row=row;}
        inline int get_col(){return this->col;}
        inline void set_col(int col){this->col=col;}
        inline enumType get_type(){return this->type;}
        inline char get_char(){return char(this->type);}
        inline void set_type(enumType type){this->type=type;}
        bool is_empty();
    private:
        int row;
        int col;
        enumType type= empty;
};

class Board{
    public:
        Cell cells[ROW][COL];
        void create_board();
        void print_board();
    private:
};