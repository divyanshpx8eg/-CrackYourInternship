//40. Combination Sum II
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    void backTrack(vector<int>& candidates, int target , 
            vector<vector<int>>& ans ,vector<int>& ele ,int point ,int n ){

                if(target==0){
                    ans.push_back(ele);
                    return;
                }

                for(int i=point;i<n;i++){
                    if(i>point && candidates[i]==candidates[i-1]) continue;

                    if (candidates[i] > target) break;

                    int curr = candidates[i];
                    ele.push_back(curr);
                    backTrack(candidates , target-curr , ans , ele , i+1, n );
                    ele.pop_back();

                }
               

    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans ; 

        vector<int> ele; 
        sort(candidates.begin() , candidates.end());
        
        int n= candidates.size();
        
       int sum=0;
        backTrack(candidates , target , ans , ele , 0 , n);
        return ans;

    }
};
