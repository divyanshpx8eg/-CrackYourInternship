//12. Integer to Roman
class Solution {
public:
    

    string intToRoman(int num) {
        vector<pair<int , string>> vec = 
        {
            {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"},
            {90, "XC"}, {50, "L"}, {40, "XL"}, {10, "X"}, {9, "IX"},
            {5, "V"}, {4, "IV"}, {1, "I"}
        };
        
        string ans ;
        
        for( auto i : vec){
            while(i.first <= num){
                ans = ans + i.second ; 
                num-=i.first; 
            }
        }
        return ans;
    }
    
};
