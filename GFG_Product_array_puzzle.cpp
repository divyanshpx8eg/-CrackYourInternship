#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
      
      vector<long long int> prefix(n);
      vector<long long int> suffix(n);
      
      vector<long long int> ans(n);
      
      prefix[0]=1;
      
      for(int i=1;i<n;i++){
          prefix[i] = nums[i-1]* prefix[i-1];
      }
      
      suffix[n-1]= 1;
      for(int i=n-2;i>=0;i--){
          suffix[i]= nums[i+1]*suffix[i+1];
      }
      
      
      for(int i=0;i<n;i++){
          ans[i] = prefix[i] * suffix[i];
      }
        return ans;
    }
};
