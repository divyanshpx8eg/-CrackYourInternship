//90. Subsets II
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
//problem ->base condition and duplicate handling

    void backTrack(vector<int>& nums ,vector<vector<int>>& result , vector<int>& ans , int index){
        result.push_back(ans);
        //Base Case
        if(index == nums.size()) return;

        
        //Backtrack
        for(int i=index ; i< nums.size() ;i++){
            if(i>index && nums[i]== nums[i-1]) continue;
            ans.push_back(nums[i]);
            backTrack(nums , result , ans , i+1);
            ans.pop_back();

        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        //sort to keep track of duplicates 
        sort(nums.begin() , nums.end());

        vector<vector<int>> result;
        vector<int> ans;
        int index=0;
        //backtrack
        backTrack(nums , result , ans , index);
        //get the required result and return it 
        return result;
    }
};
