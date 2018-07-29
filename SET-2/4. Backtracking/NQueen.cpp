/* You are given N, and for a given N x N chessboard, find a way to place N queens such that no queen can attack any other queen on the chess
 board. A queen can be killed when it lies in the same row, or same column, or the same diagonal of any of the other queens.
  You have to print all such configurations. */
#include<bits/stdc++.h>
#define N 4
using namespace std;
void nQueens(int board[N][N],int);
int isSafe(int board[N][N],int row,int col);
int main(){
    int board[N][N];
    nQueens(board,0);
}
void nQueens(int board[N][N],int num){
    if(num==N){
        for(int k=0;k<N;k++){
            for(int l=0;l<N;l++){
                if(board[k][l]){
                    cout << "1 ";
                }
                else{
                    cout << "0 ";
                }
            }
            cout<<endl;
        }
        return;
    }
    int row = num;
    for(int col=0;col<N;col++){
        if(isSafe(board,row,col)){
            board[row][col]=1;
            nQueens(board,num+1);
        }
        board[row][col]=0;
    }
}

int isSafe(int board[N][N],int row,int col){
    //vertical
    int R = row, C=col;
    while(R>=0){
        if(board[R][C]){
            return 0;
        }
        R--;
    }
    //horizontal
    R = row, C=col;
    while(C>=0){
        if(board[R][C]){
            return 0;
        }
        C--;
    }
    //+ve diagonal
    R = row, C=col;
    while(R>=0 && C<N){
        if(board[R][C]){
            return 0;
        }
        R--;
        C++;
    }
     //-ve diagonal
      R = row, C=col;
    while(R>=0 && C>=0){
        if(board[R][C]){
            return 0;
        }
        R--;
        C--;
    }
    return 1;
}










