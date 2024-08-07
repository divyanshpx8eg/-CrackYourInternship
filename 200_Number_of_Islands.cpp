//200. Number of Islands
class Solution {
public:
    void DFSChanger(vector<vector<char>>& grid, int i , int j, int m,int n){
        if(i>=0 && j>=0    && i<m && j<n   &&     grid[i][j]=='1'){
            grid[i][j]='0';
            DFSChanger(grid, i+1,j,m,n);
            DFSChanger(grid, i-1,j,m,n);
            DFSChanger(grid, i,j+1,m,n);
            DFSChanger(grid, i,j-1,m,n);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int count =0 ;


        int m = grid.size();
        int n = grid[0].size();

        for(int i=0;i<m ;i++){
            for(int j =0;j<n ;j++){
                if(grid[i][j]=='1'){
                    count++;
                    DFSChanger(grid , i , j ,m ,n);
                }
            }
        }
        return count;
    }
};
