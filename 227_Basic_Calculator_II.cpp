//227. Basic Calculator II

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int valOp(char i ){// return value of oprator '-'->1
         if (i == '-' || i == '+') return 1;
        if (i == '*' || i == '/') return 2;
        return -1;
    }
    int cal (int a ,int b , char op){  //calculate the (a op b)
        if (op == '-') return a - b;
        if (op == '+') return a + b;
        if (op == '*') return a * b;
        if (op == '/') {
            if (b == 0) return 0; // handle division by zero
            return a / b;
        }
        return -1;
    }
    int calculate(string str) {
        stack<char> operate;
        stack<int> number;
        int n= str.size();
        int i=0;

        while(i<n){
           
            //pushing digit
            if (isdigit(str[i])) {
                int digit = 0;
                while (i < n && isdigit(str[i])) {
                    digit = digit * 10 + (str[i] - '0');
                    i++;
                }
                number.push(digit);
            }
             if (isspace(str[i])) {
                i++;
                continue;
            }
            //pushing operator;
            if(i < n && !isdigit(str[i])){
                int v= valOp(str[i]); 
                while(!operate.empty() && valOp(operate.top()) >=v ){
                    //if(number.size()<2) break;
                    int b= number.top();
                    number.pop();
                    int a= number.top();
                    number.pop();

                    number.push(cal(a,b,operate.top())); //pushing the calculated result
                    operate.pop();
                }
                operate.push(str[i]);
                i++;
            }
        }

        //final computation
        while(!operate.empty()){
            
            int b= number.top();
            number.pop();
            int a= number.top();
            number.pop();
            number.push(cal(a,b,operate.top())); //pushing the calculated result
            operate.pop();
        }

        
        return number.top();
    }
};
