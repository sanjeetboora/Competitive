/* You are given a N*N maze with a rat placed at maze[0][0]. Find and print all paths that rat can follow to reach its destination
 i.e. maze[N-1][N-1]. Rat can move in any direc­tion ( left, right, up and down).
Value of every cell in the maze can either be 0 or 1. Cells with value 0 are blocked
means rat can­not enter into those cells and those with value 1 are open.
You need to explore path in following order - Up , Down,Left,Right */
#include<bits/stdc++.h>
using namespace std;
void printMaze(int** sol,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<sol[i][j];
        }
    } cout<<endl;
}
void mazeHelper(int maze[][20],int** sol,int n,int x,int y){
    if(x==n-1 && y==n-1){
        sol[x][y]=1;
        printMaze(sol,n);
        return;
    }
    if(x>=n || y>=n || x<0 || y<0 || maze[x][y]==0 || sol[x][y]==1){
        return;
    }
    sol[x][y]=1;
    mazeHelper(maze,sol,n,x-1,y);
    mazeHelper(maze,sol,n,x+1,y);
    mazeHelper(maze,sol,n,x,y-1);
    mazeHelper(maze,sol,n,x,y+1);
    sol[x][y]=0;
}
void ratMaze(int maze[][20],int n){
    int** sol = new int*[n];
    for(int i=0;i<n;i++){
        sol[i] = new int[n];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            sol[i][j]=0;
        }
    }
    mazeHelper(maze,sol,n,0,0);
}
int main(){
    int n=3;
    int maze[][20]={{1, 0, 1},{1, 0, 1},{1, 1, 1}};
    ratMaze(maze,n);
}
