//20. Valid Parentheses

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isValid(string str) {
        stack<char> s; 

        for(auto i : str){
            if(i=='(' || i=='[' || i=='{'){
                s.push(i);
            }
            
                else if(s.empty()) return false;
                
                    else if(i==')' && s.top()=='('){
                        s.pop();
                    }
                    else if(i=='}' && s.top()=='{'){
                        s.pop();
                    }
                    else if(i==']' && s.top()=='['){
                        s.pop();
                    }
                    else{
                        return false;
                    }
                
            
        }
       
        return s.empty() ;
    }
};
