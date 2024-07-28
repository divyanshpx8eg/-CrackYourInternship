//Print Anagrams Together

#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& strs) {
        // string stores count and int stores result's index;
        unordered_map<string , int> mp;
        int n= strs.size();
        
        vector<vector<string> > result;
        
        //storing in the vector 
        for(int i=0;i<n;i++){
            //crested string count;
            string s(26, 0);
            for(auto j : strs[i]){
                s[j-'a']++;
            }
            
            //if same count string already exists
            if(mp[s]){
                result[mp[s]-1].push_back(strs[i]);
            }
            //if it's first time this count has appeared;
            else{
                vector<string> ans;
                ans.push_back(strs[i]);
                result.push_back(ans);
                mp[s] = result.size();
            }
        }
        
        //returning 
        return result;
    }
