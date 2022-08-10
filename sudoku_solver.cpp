#include<bits/stdc++.h>
using namespace std;

void Print(board[][9],int n){

}


 int main(){
int n=9;
int board[9][9]={
    {0,0,7,1,0,0,0,6,0},
    {1,0,5,2,0,8,0,0,0},
    {6,0,0,0,0,7,1,2,0},
    {3,1,2,4,0,5,0,0,8},
    {0,0,6,0,9,0,2,0,0},
    {0,0,0,0,0,3,0,0,1},
    {8,0,3,9,0,6,0,0,0},
    {0,6,0,0,8,2,7,0,3},
};
SudokuSolver(board,0,0,n);
return 0;
}

 }