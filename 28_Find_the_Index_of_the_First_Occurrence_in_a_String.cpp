//28. Find the Index of the First Occurrence in a String

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        for(int i=0;i<haystack.size();i++ ){

            if(haystack[i]==needle[0]){
               
                int index=i;
                bool flag=1;
                for(auto j: needle){
                    if(haystack[index]!=j){
                        flag=0;
                        break;
                    }
                    index++;
                }
                if(flag){
                    return i;
                }
            }
        }
        return -1;
    }
};
