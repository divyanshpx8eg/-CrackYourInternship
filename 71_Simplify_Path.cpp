//71. Simplify Path
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string simplifyPath(string path) {
        
        string ans;
        int n = path.size();

        int i=0;
        int j=0;

        while(i<n){
           
            if(path[i]=='/') ans.push_back('/');
            int j=i+1;
            string direc= "";
            while(j<n && path[j]!='/'){
                direc+=path[j];
                j++;
            }
            if(direc==""){
                ans.pop_back();
            }
            else if(direc=="."){
                ans.pop_back();
            }
            else if(direc==".."){
                ans.pop_back();
                while(!ans.empty() && ans.back()!='/'){
                    ans.pop_back();
                }
                if(! ans.empty()){
                     ans.pop_back();
                }
            }
            else{
                ans+=direc;
            }

            i=j;
        }

        if(ans.empty()) ans.push_back('/');
        
        
        return ans;
    }
};
