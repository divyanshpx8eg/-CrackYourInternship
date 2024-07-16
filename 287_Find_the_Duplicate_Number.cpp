//287. Find the Duplicate Number

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i=0;
        int j=nums[0];

        //Loop it from it's index
        //like for  [1,3,4,2,2]  i=0 -> j=1 [-1,3,4,2,2]
        //i=j=1 -> j=3 [-1,-1,4,2,2]
        //i=3 -> j=2  [-1,-1,4,-1,2]
        //i=2 -> j=4 [-1,-1,-1,-1,2]
        //i=4 -> j=2 [-1,-1,-1,-1,-1]
        //i=2 -> j=-1 means 2 is the duplicate....
        while(1){
            nums[i]=-1;
            i=j;
            j=nums[i];
            if(j==-1){
                return i;
            }
        }
    }
};
