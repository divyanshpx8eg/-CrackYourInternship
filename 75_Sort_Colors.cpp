//75. Sort Colors

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        // Here we have used Dutch National Flag Method ..
        
        int s=0;
        int e=nums.size()-1;
        int i=s;

        while(i<=e && s < e ){
            if(nums[i]==0){
                swap(nums[i], nums[s]);
                s++;
                i++;
                
            }
            else if(nums[i]==2){
                swap(nums[i],nums[e]);
                
                e--;
                
            }
            else{
                i++;
            }
            
        }
        
    }
};
