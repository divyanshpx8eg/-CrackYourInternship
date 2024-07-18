442. Find All Duplicates in an Array

#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        

        // make the numbers negative and simulteneously check for the negative number i.e Duplicate number

        // 4 3 2 7 8 2 3 1
        //i=0 -->4 
        //4-1=3 so move to 3rd index means 7 and change it -7

        // 4 3 2 -7 8 2 3 1
        //i=1 -->3
        //3-1=2 so move to 2rd index means 2 and change it -2

        // 4 3 -2 -7 8 2 3 1
        //and this goes on till the same repeative number point towards the -ve one and then we will add it to our ans array/vector.


        vector<int>ans;
        for(int i = 0;i<nums.size();i++){
            int num = abs(nums[i]);

            if(nums[num - 1]<1){
                ans.push_back(num);
            }

            nums[num-1] = nums[num-1] * (-1);
        }

        return ans;
    }
};
