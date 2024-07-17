//1. Two Sum
#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
                   //value  index
        

        int i=0;
        while(i!=nums.size()){
            int left=target-nums[i];

            if(m.count(left)){
                return {m[left],i};
            }
            
            m[nums[i]]=i;
            i++;
        }

        return {-1,-1};
    }
};
