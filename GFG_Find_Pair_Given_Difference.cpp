//Find Pair Given Difference

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int findPair(int n, int x, vector<int> &arr) {
        if(n==1 ) return -1;
        sort(arr.begin() , arr.end());
        
        int i=0;
        int j=1;
        
        while(j!=n){
            
            if(abs(arr[i]-arr[j])==x) return 1;
            else if( abs(arr[i] -arr[j]) > x) {
                i++;
                if(i==j) j++;
            }
            else j++;
        }
        return -1;
    }
};
