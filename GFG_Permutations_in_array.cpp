//Permutations in array

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool isPossible(long long a[], long long b[], int n, long long k) {
        sort(a,a+n);
        
        sort(b,b+n, greater<int>());
        
        for(int i=0;i<n;i++){
            if(a[i]+b[i]< k) return 0;
        }
        return 1;
        
    }
};

