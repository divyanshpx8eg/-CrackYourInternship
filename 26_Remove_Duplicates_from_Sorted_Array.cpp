//26. Remove Duplicates from Sorted Array

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //Traverse the whole array using iterator "i" and put a pointer "add" for setting up unique and move "add" only when you get your next unique element 
        int count=0;
        int add=0;
        

        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]==nums[i]){
                count++;
            }
            else{
                nums[add++]=nums[i];
            }
            
        }
        
        nums[nums.size()-count-1]=nums[nums.size()-1];

        return nums.size()-count;
    }
};
