//121. Best Time to Buy and Sell Stock

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int mini= INT_MAX;

        int maxProfit=0;

        for(auto i : prices){
            mini=min(i,mini);

            int currProfit=i-mini;

            maxProfit=max(currProfit , maxProfit);
        }

        return maxProfit;
    }
};
