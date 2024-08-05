//Rat in a Maze Problem - I

const int direction[4][3] = {
    {-1, 0, 85},  // Up
    {1, 0, 68},   // Down
    {0, -1, 76},  // Left
    {0, 1, 82}    // Right
};
class Solution {
  public:
  void solver(int i , int j , int n , vector<vector<int>> &mat,
           vector<vector<bool>>& visited , vector<string>& result , string ans){
      //i , j, n , mat , visited, mat , result , ans
      if(i>=0 && j>=0 && i<n && j<n && visited[i][j]==0 && mat[i][j]==1){
          //if it is safe 
          visited[i][j]=1;
          
        //pushing condition
        if (i == n-1 && j == n-1) {
            result.push_back(ans);
            visited[i][j] = 0;
            return;
        }
        
        
        for(int k=0;k<4;k++){
          //neigbour call
          int newI = i + direction[k][0];
          int newJ = j + direction[k][1];
          ans+=char(direction[k][2]);
          solver( newI , newJ ,n , mat , visited , result , ans);
          ans.pop_back();
          
        }
        
        visited[i][j]=0;
      }

  }
    vector<string> findPath(vector<vector<int>> &mat) {
        int n = mat.size();
        vector<vector<bool>> visited (n, vector<bool>(n,0));
        vector<string> result;
        string ans;
        solver( 0 , 0 ,n , mat , visited , result , ans);
        return result;
        
    }
};
