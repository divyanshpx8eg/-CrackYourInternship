//169. Majority Element

#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int maj=0;
        for(auto i : nums){
            if(count==0){
                maj=i;
            }

            if(maj==i){
                count++;
            }
            else{
                count--;
            }
        }

        return maj;
    }
};
