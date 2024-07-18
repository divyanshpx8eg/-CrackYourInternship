//11. Container With Most Water

#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {

        int s=0;
        int e=height.size()-1;

        int water=0;

        while(s<e){
            water=max(water , (e-s)* min(height[s],height[e]));

            if(height[s]>height[e]){
                e--;
            }else{
                s++;
            }
        }

        return water;
        
    }
};
