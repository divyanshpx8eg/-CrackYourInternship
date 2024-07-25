//54. Spiral Matrix

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int row=matrix.size();
        int col=matrix[0].size();
        int total=row*col;
        int count=0;

        int strow=0;
        int stcol=0;
        int enrow=row-1;
        int encol=col-1;

        while(total>count){

            for(int i=stcol;total>count && i<=encol;i++){
                ans.push_back(matrix[strow][i]);
                count++;
            }
            strow++;

            for(int i=strow;total>count && i<=enrow;i++){
                ans.push_back(matrix[i][encol]);
                count++;
            }
            encol--;

            for(int i=encol;total>count && i>=stcol;i--){
                ans.push_back(matrix[enrow][i]);
                count++;
            }
            enrow--;

            for(int i=enrow;total>count && i>=strow;i--){
                ans.push_back(matrix[i][stcol]);
                count++;
            }
            stcol++;
        }
        return ans;
        
    }
};
