#include<bits/stdc++.h>
using namespace std;

bool isSafe(int board[][10],int i,int j,int n){
    
    for(int row=0;row<i;row++){
        if(board[row][j]==1){
            return false;
        }
    }
    //left diag
    int x=i;
    int y=j;
    while(x>=0 && y>=0){
        if(board[x][y]==1){
            return false;
        }
        x--;
        y--;
    }
    //right dia
    x=i;
    y=j;
    while(x>=0 && y<n){
        if(board[x][y]==1){
            return false;
        }
        x--;
        y++;
    }
    return true;
}
bool SolveNQueen(int board[][10],int i,int n){
        //base case 
    if(i==n){
        //sucess in placing queens
        //print board
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==1){
                    cout<<"Q ";
                }
                else{
                    cout<<". ";
                }
            }
            cout<<endl;
        }
        return true;
    }
    //recursive case 
    for(int j=0;j<n;j++){
            if(isSafe(board,i,j,n)){
                board[i][j]=1;
                bool nextQ=SolveNQueen(board,i+1,n);
                if(nextQ){
                    return true;
                }
                board[i][j]=0;
            }
    }
    return false;
}

int main(){
    int n=8;
    int board[10][10]={0};
    SolveNQueen(board,0,n);
    return 0;
}