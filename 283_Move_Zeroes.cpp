//283. Move Zeroes

#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int s=0;
        int i=0;
        while(i<nums.size()){
            if(nums[i]!=0){
                nums[s]=nums[i];
                s++;
            }
            i++;
        }
        while(s<nums.size()){
            nums[s]=0;
            s++;
        }
    }
};
