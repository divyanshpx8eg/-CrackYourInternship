//168. Excel Sheet Column Title
class Solution {
public:
    string convertToTitle(int n) {
        
        string ans;
        while(n>0){
            n--;
            int q=n/26;
            int r=n%26;
            ans = char('A'+r)+ans;
            n=q;
        }
        
        
        return ans;
        
    }
};
