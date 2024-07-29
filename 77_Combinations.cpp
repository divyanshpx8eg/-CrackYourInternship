//77. Combinations
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    void backTrack(vector<vector<int>>& result , vector<int>& ans , int n , int k , int index){
        if(ans.size()==k){
            result.push_back(ans);
        }

        for(int i=index ; i<=n ;i++){
            ans.push_back(i);
            backTrack(result , ans , n ,k , i+1);
            ans.pop_back();
        }

    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> result ;
        vector<int> ans; 
        int index=1;

        backTrack(result , ans , n , k , index);

        return result;
    }
};
