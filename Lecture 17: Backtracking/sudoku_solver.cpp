#include<bits/stdc++.h>
using namespace std;
bool isEmpty(int board[9][9],int &row,int &col){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(board[i][j]==0){
                row=i;
                col=j;
                return true;
            }
        }
    }
    return false;
}
bool checkcol(int board[9][9],int n,int col){
    for(int i=0;i<9;i++){
        if(board[i][col]==n)return false;
    }
    return true;
}
bool checkrow(int board[9][9],int n,int row){
    for(int i=0;i<9;i++){
        if(board[row][i]==n)return false;
    }
    return true;
}
bool checkbox(int board[9][9],int k,int i,int j){
    int row=i-(i%3);
    int col=j-(j%3);
    for(int l=0;l<3;l++){
        for(int m=0;m<3;m++){
            if(board[l+row][m+col]==k)return false;
        }
    }
    return true;
}
bool isSafe(int board[9][9],int row,int col,int k){
    if(checkrow(board,k,row)&&checkcol(board,k,col)&&checkbox(board,k,row,col))
        return true;
    return false;
}
bool sudokuSolver(int board[9][9]){
    int row,col;
            if(!isEmpty(board,row,col))
                return true;
                for(int k=1;k<=9;k++){
                if(isSafe(board,row,col,k)){
                    board[row][col]=k;
                    if(sudokuSolver(board)){
                        return true;
                    }
                board[row][col]=0;
                }
                }
    return false;
}
int main(){
    
    // write your code here
    int board[9][9];
    for(int i=0;i<9;i++){
        // string s;
        // cin>>s;
        for(int j=0;j<9;j++){
        cin>>board[i][j];
            // =s[j]-'0';
        }
    }
    bool flag=sudokuSolver(board);
    if(!flag)
    cout<<"false";
    else
    cout<<"true";
    return 0;
}
