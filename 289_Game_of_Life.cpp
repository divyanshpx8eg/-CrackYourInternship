//289. Game of Life

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void gameOfLife(vector<vector<int>>& board , int a=0 , int b=0) {
        int m= board.size();
        int n= board[0].size();
        int count1=0;
        int count0=0;

        // storing details of 8 neigbour
        for(int i=a-1; i<=a+1 ;i++){
            if(i < 0 || i >= m) continue;
            for(int j=b-1; j<=b+1 ; j++){
                if((j < 0 || j >= n) ||(i==a && j==b)) continue; 
                    if(board[i][j]) count1++;
                    else count0++;
            }
        }

        //calling the function for rest;
        int futureB = (b + 1 >= n) ? 0 : b + 1;
        int futureA = (b + 1 >= n) ? a+1 : a;

        if (futureA < m){
            gameOfLife(board , futureA, futureB);
        }

        // Rules of Game of life
        if(board[a][b]==1 && (count1<2 || count1>3) ){
            board[a][b]=0;
        }
        else if(board[a][b]==0 && count1==3){
            board[a][b]=1;
        }
    }
};
