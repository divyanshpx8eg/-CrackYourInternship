//48. Rotate Image
class Solution {
public:
    void rotate(vector<vector<int>>& matrix ,int i=0, int j=0) {
        int n = matrix.size();
        //first transpose 
        //then revert it reverse 

        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                swap(matrix[i][j] , matrix[j][i]);
            }
        }

        for(auto& vec: matrix){
            reverse(vec.begin(), vec.end());
        }
    }
};
