//79. Word Search
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool backtrack(vector<vector<char>>& board,vector<vector<bool>>&visited , string& word , int m , int n , int target ){
        if(word.size()-1==target && word.back()==board[m][n]){
            return 1;
        }
        if( word[target] != board[m][n]){
            return 0;
        }


       // cout<<word[target]<<" ";

        int row= board.size();
        int col= board[0].size();
        visited[m][n]=1;

        //down 
        int a=m+1;
        int b=n;
        if(a>=0 &&a<row && b>=0 && b< col && visited[a][b]==0  ){
            bool ans= backtrack(board , visited , word , a , b , target+1);
            
            if(ans){
                visited[m][n]=0;
                return ans;
            } 
        }
        //up
         a=m-1;
         b=n;
        if(a>=0 &&a<row && b>=0  && b< col && visited[a][b]==0  ){
            bool ans= backtrack(board , visited , word , a , b , target+1);
            if(ans){
                visited[m][n]=0;
                return ans;
            }
        }
        //left
         a=m;
         b=n-1;
        if(a>=0 &&a<row && b>=0  && b< col && visited[a][b]==0  ){
            bool ans= backtrack(board , visited , word , a , b , target+1);
            if(ans){
                visited[m][n]=0;
                return ans;
            }
        }
        //right
         a=m;
         b=n+1;
        if(a>=0 &&a<row && b>=0  && b< col && visited[a][b]==0  ){
            bool ans= backtrack(board , visited , word , a , b , target+1);
            if(ans){
                visited[m][n]=0;
                return ans;
            }
        }

        visited[m][n]=0;
        return 0;
    } 


    bool exist(vector<vector<char>>& board, string word) {
        int row= board.size();
        int col= board[0].size();
        

        //need-> visited , board , word , m ,n ,row and col pointer 
        vector<vector<bool>> visited(row,vector(col,false));
        

        for(int i=0;i<row ;i++){
            for(int j=0;j<col;j++){
                if(board[i][j]==word[0]){
                    
                    if(backtrack(board , visited , word , i , j ,0)){
                        return 1;
                    }
                }
            }
        }
        return 0;
    }
};
