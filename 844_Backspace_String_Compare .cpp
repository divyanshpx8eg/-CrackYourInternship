//844. Backspace String Compare
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> S;
        stack<char> T;
        for(auto i  : s){
            if(i=='#'){
                if(!S.empty()) S.pop();
            }
            else S.push(i);
        }
        for(auto i  : t){
            if(i=='#'){
                if(!T.empty()) T.pop();
            }
            else T.push(i);
        }
        
        while(!S.empty() && !T.empty()){
            if(T.top()==S.top()) {
                S.pop();T.pop();
            }else return false;
        }
        if(!S.empty()) return false;
        if(!T.empty()) return false;

        return true;
    }
};
