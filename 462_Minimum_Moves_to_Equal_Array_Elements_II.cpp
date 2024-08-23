//462. Minimum Moves to Equal Array Elements II

class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int n = nums.size();
        int value =  n%2==0 ?(nums[n/2] + nums[n/2-1])/2 : nums[n/2];
        cout<<value;
        int ans = 0 ; 

        for(auto i : nums){
            ans+= abs(value-i);
        }
        return ans ;
    }
};
