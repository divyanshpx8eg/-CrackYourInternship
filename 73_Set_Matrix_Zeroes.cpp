//73. Set Matrix Zeroes

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
   
    void setZeroes(vector<vector<int>>& matrix) {

        // we will use first row and column as our maps but putting zeroes in that row and col in which any 0 is present
        int m= matrix.size();         // no. of rows 
        int n= matrix[0].size();      // no. of column


        // as we are using first col and row as map so we need to custom manage first row and column
        bool first_row=false;
        bool first_col=false;
        for(auto i : matrix[0]){// for first row
            if(i==0){
                first_row=true;
                break;
            }
        }
        for(auto i : matrix){ // for first col
            if(i[0]==0){
                first_col=true;
                break;
            }
        }

        //for mapping in first col and row if there are any 0 in matrix
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }

        // checking all rows and updating them
        for(int i=1;i<m;i++){
            if(matrix[i][0]==0){
                for(int j=0;j<n;j++){
                    matrix[i][j]=0;
                }
            }
        }
        // checking all cols and updating them
        for(int i=1;i<n;i++){
            if(matrix[0][i]==0){
                for(int j=0;j<m;j++){
                    matrix[j][i]=0;
                }
            }
        }

        //checking first row and col and updating them.
        if(first_row){
            for(int i=0;i< n ;i++){
                matrix[0][i]=0;
            }
        }
        if(first_col){
            for(int i=0;i<m;i++){
                matrix[i][0]=0;
            }
        }
    }
};
