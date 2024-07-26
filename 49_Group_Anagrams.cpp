//49. Group Anagrams

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map <string ,int > mp;
        vector<vector<string>> ans;
        for(int i=0;i<strs.size();i++){
            string store(26,'0');
            for(auto j : strs[i]){
                store[j-'a']++;
            }


            if(mp[store]==0){
                ans.push_back({strs[i]});
                mp[store] = ans.size();
            }
            else{
                int index = mp[store]-1;
                ans[index].push_back(strs[i]);
            }
        }
        return ans;
    }
};
