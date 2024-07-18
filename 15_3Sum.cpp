//15. 3Sum

#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;

        int n=nums.size();

        sort(nums.begin() , nums.end());

        for(int i=0; i < n ;i++){

            if(i!=0&& nums[i]==nums[i-1]){
                continue;
            }

            int s=i+1, e=n-1;
            int target= - nums[i];
            while(s<e){
                int sum=nums[s]+ nums[e];

                if(target == sum){
                    ans.push_back({nums[i], nums[s], nums[e]});

                     while(s<e){
                        if(nums[e]==nums[e-1]){
                            e--;
                        }
                        else{
                            break;
                        }
                    }
                    while(s<e){
                        if(nums[s]==nums[s+1]){
                            s++;
                            
                        }
                        else{
                            break;
                        }
                    }
                    s++;
                    e--;
                }
                else if(target > sum){
                    
                    s++;
                }
                else{
                   
                    e--;
                }
            }
        }
        return ans;
    }
};
