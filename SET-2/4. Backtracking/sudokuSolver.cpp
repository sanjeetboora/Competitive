/* Given a 9*9 sudoku board, in which some entries are filled and others are 0 (0 indicates that the cell is empty),
 you need to find out whether the Sudoku puzzle can be solved or not i.e. return true or false. */
#include<bits/stdc++.h>
using namespace std;
bool findblank(int arr[9][9],int &row,int &col){
    for(row=0;row<9;row++){
        for(col=0;col<9;col++){
            if(arr[row][col]==0){
                return true;
            }
        }
    }
    return false;
}
bool usedinRow(int arr[9][9],int row,int col,int num){
    for(int j=0;j<9;j++){
        if(arr[row][j]==num){
            return true;
        }
    }
    return false;
}
bool usedinCol(int arr[9][9],int row,int col,int num){
    for(int j=0;j<9;j++){
        if(arr[j][col]==num){
            return true;
        }
    }
    return false;
}

bool usedinBox(int arr[9][9],int boxstartrow,int boxstartcol,int num){
    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            if(arr[boxstartrow+row][boxstartcol+col]==num){
                return true;
            }
        }
    }
    return false;
}

bool isSafe(int arr[9][9],int row,int col,int num){
    return !usedinRow(arr,row,col,num) && !usedinCol(arr,row,col,num) && !usedinBox(arr,row - row%3,col - col%3,num);

}
bool sudokusolver(int arr[9][9]){
    int row=0,col=0;
    if(findblank(arr,row,col)==false){
        return true;
    }
    for(int i=1;i<=9;i++){
        if(isSafe(arr,row,col,i)){
            arr[row][col]=i;
            if(sudokusolver(arr)==true){
                return true;
            }
            arr[row][col]=0;

        }
    }
    return false;
}
void printsudoku(int matrix[9][9]){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int test;
    while(test>0){
        int arr[9][9]={0};
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                cin>>arr[i][j];
            }
        }
/*    int arr[9][9]={{0, 0, 0, 0, 6, 9, 8, 3, 0},
{9, 8, 0, 0, 0, 0, 0, 7, 6},
{6, 0, 0, 0, 3, 8, 0, 5, 1},
{2, 0, 5, 0, 8, 1, 0, 9, 0},
{0, 6, 0, 0, 0, 0, 0, 8, 0},
{0, 9, 0, 3, 7, 0, 6, 0, 2},
{3, 4, 0, 8, 5, 0, 0, 0, 9},
{7, 2, 0, 0, 0, 0, 0, 6, 8},
{0, 5, 6, 9, 2, 0, 0, 0, 0}
};*/
         if(sudokusolver(arr)==true){
            cout << "true"<<endl;
            //printsudoku(arr);
         }
         else{
             cout << "false"<<endl;
             //cout << "No solution"<<endl;
         }

        test--;
    }
    return 0;
}
