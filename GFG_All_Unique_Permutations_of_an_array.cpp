//All Unique Permutations of an array
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
  
    void permu(int n, vector<vector<int>>&ans ,
            map<int , int>& mp ,vector<int>&ele)
    {
        if(ele.size()==n){
            ans.push_back(ele);
            return;
        }
         for (const auto& pair : mp){
             if(pair.second){
                 ele.push_back(pair.first);
                 mp[pair.first]--;
                 permu( n , ans, mp , ele);
                 mp[pair.first]++;
                 ele.pop_back();
             }
         }
    }
    vector<vector<int>> uniquePerms(vector<int> &arr ,int n) {
        vector<vector<int>> ans ; 
        
        map<int , int> mp ; 
        for(auto i : arr){
            mp[i]++;
        }
        
        vector<int> ele;
        
        permu( n ,  ans , mp , ele);
        
        return ans;
        
    }
};
