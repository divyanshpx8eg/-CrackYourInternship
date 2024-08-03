//733. Flood Fill

class Solution {
public:
    void flood(int& m ,int& n , vector<vector<int>>& image, int sr, int sc, int color , int reqdColor){
        if(sr >=0 && sr<m && sc>=0 && sc<n && image[sr][sc]==reqdColor){
            image[sr][sc]=color;
            flood(m ,n , image , sr+1 , sc , color ,reqdColor);
            flood(m ,n , image , sr , sc+1 , color,reqdColor);
            flood(m ,n , image , sr-1 , sc , color, reqdColor);
            flood(m ,n , image , sr , sc-1 , color, reqdColor);
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int m = image.size();
        int n = image[0].size();
        if(image[sr][sc]!= color) flood(m ,n , image , sr , sc , color ,image[sr][sc]);
        
        return image;
    }
};
