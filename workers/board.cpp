#include"../libraries/base.h"
#include"../libraries/board.h"

void Board:: create_board(){
    Cell tempCell;
    for(int i=0;i<ROW;i++){
        for(int j=0;j<COL;j++){
            tempCell.set_row(i);
            tempCell.set_col(j);
            if(i==0){
                if(j==0 || j==7){
                    tempCell.set_type(brook);
                }
                else if(j==1 || j==6){
                    tempCell.set_type(bknight);
                }
                else if(j==2 || j==5){
                    tempCell.set_type(bbishop);
                }
                else if(j==3){
                    tempCell.set_type(bqueen);
                }
                else if(j==4){
                    tempCell.set_type(bking);
                }    
            }
            else if(i==1){
                tempCell.set_type(bpawn);
            }
            else{
                tempCell.set_type(empty);
            }
            if(i==7){
                if(j==0 || j==7){
                    tempCell.set_type(wrook);
                }
                else if(j==1 || j==6){
                    tempCell.set_type(wknight);
                }
                else if(j==2 || j==5){
                    tempCell.set_type(wbishop);
                }
                else if(j==3){
                    tempCell.set_type(wqueen);
                }
                else if(j==4){
                    tempCell.set_type(wking);
                }    
            }
            else if(i==6){
                tempCell.set_type(wpawn);
            }
            cells[i][j]=tempCell;
        }
    }
}
void Board:: print_board(){
    cout<<"    _________________________________________________________________________________\n";
    for(int i=0;i<ROW;i++){
        cout<<ROW-i<<"  | ";
        for(int j=0;j<COL;j++){
            if((i+j)%2==0 && this->cells[i][j].is_empty()==true){
                cout<<"   "<<"///"<<"   |";
            }
            else if((i+j)%2==0 && this->cells[i][j].is_empty()==false){
                cout<<"   "<<"/"<<this->cells[i][j].get_char() <<"/"<<"   |";
            }
            else if((i+j)%2!=0 &&this->cells[i][j].is_empty()==false){
                cout<<"   "<<" "<<this->cells[i][j].get_char() <<" "<<"   |";
            }
            else{
                cout<<"   "<<"   "<<"   |";
            }
        }
        cout<<"\n";
        cout<<"   __________________________________________________________________________________\n";
    }
    cout<<"\n"<<"         a         b        c         d         e         f         g         h   \n\n";
}
bool Cell:: is_empty(){
    if(this->get_type()==empty){
        return true;
    }
    else return false;
}
