//67. Add Binary

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        string ans="";
        int carry=0;
        int i=a.size()-1;
        int j=b.size()-1;
        while(i>-1 || j>-1){
            int f, l;

            if(i>=0)f= a[i]-48;
            else f=0;

            if(j>=0)l=b[j]-48;
            else l=0;

            int sum=f+l+carry;
            carry=sum/2;
            ans=static_cast<char>(sum%2+48)+ans;
           
            

            
            i--;j--;
        }
        if(carry){
            ans='1'+ans;
        }

        return ans;
    }
};
