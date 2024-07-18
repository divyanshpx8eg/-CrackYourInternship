//18. 4Sum

#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(int first, vector<int>& nums , long long t , vector<vector<int>> &ans) {
        

        int n=nums.size();

        sort(nums.begin() , nums.end());

        for(int i=0; i < n ;i++){

            if(i!=0&& nums[i]==nums[i-1]){
                continue;
            }

            int s=i+1, e=n-1;
            long long target= t- nums[i];
            while(s<e){
                int sum=nums[s]+ nums[e];

                if(target == sum){
                    ans.push_back({first,nums[i], nums[s], nums[e]});

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
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for(int i=0;i<nums.size();i++){
            if(i!=0 && nums[i]==nums[i-1]){
                continue;
            }
            vector<int>a(nums.begin() +i+1, nums.end());
            threeSum(nums[i], a , target-nums[i] , ans);


        }
        return ans;
    }
};
