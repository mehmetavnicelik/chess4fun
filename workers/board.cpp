#include"../libraries/base.h"
#include"../libraries/board.h"

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
