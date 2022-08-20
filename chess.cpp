#include<iostream>

#define ROW 8
#define COL 8

using namespace std;

enum enumType{
	pawn = 'p',
	rook = 'r',
	knight = 'k',
	bishop = 'b',
	queen = 'q',
    king= 'K',
    empty= ' '
};

class Cell{
    public:
        int get_row(){return row;}
        void set_row(int row){this->row=row;}
        int get_col(){return col;}
        void set_col(int col){this->col=col;}
        enumType get_type(){return type;}
        char get_char(){return char(this->type);}
        void set_type(enumType type){this->type=type;}
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

void Board:: create_board(){
    Cell tempCell;
    for(int i=0;i<ROW;i++){
        for(int j=0;j<COL;j++){
            tempCell.set_row(i);
            tempCell.set_col(j);
            if(i==1 || i==6){
                tempCell.set_type(pawn);
            }
            else if((i==0 || i==7) && (j==0 || j==7)){
                tempCell.set_type(rook);
            }
            else if((i==0 || i== 7) && (j==1 || j==6)){
                tempCell.set_type(knight);
            }
            else if((i==0 || i== 7) && (j==2 || j==5)){
                tempCell.set_type(bishop);
            }
            else if((i==0 || i== 7) && (j==3)){
                tempCell.set_type(queen);
            }
            else if((i==0||i==7) && (j==4)){
                tempCell.set_type(king);
            }
            else{
                tempCell.set_type(empty);
            }
            cells[i][j]=tempCell;
        }
    }
}

int main(){
    Board board;
    board.create_board();
    cout<<"    ______________________________\n";
    for(int i=0;i<ROW;i++){
        cout<<ROW-i<<"  |";
        for(int j=0;j<COL;j++){
            cout<<board.cells[i][j].get_char()<<" | ";
        }
        cout<<"\n";
        cout<<"    ______________________________\n";

    }
    cout<<"\n"<<"    a   b   c   d   e   f   g   h   \n\n";

    return 0;
}