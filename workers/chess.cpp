#include"../libraries/base.h"
#include"../libraries/board.h"

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