//122. Best Time to Buy and Sell Stock II

#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int profit=0;

        int currStock=-1;

        for(int i=0;i<prices.size();i++){
            //I don't have a stock
            if(currStock==-1){
                //cheap price stock buy
                if(i!=prices.size()-1 && prices[i]<=prices[i+1] ){
                    currStock=prices[i];
                }
            }
            //I already have a stock
            else{
                //selling my cheap stock in profit
                if(currStock <=prices[i] ){
                    profit +=prices[i]-currStock;
                    currStock=-1;
                    i--;
                }
            }
            
        }

        return profit;
        
    }
};
