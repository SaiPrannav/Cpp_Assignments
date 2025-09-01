#include<iostream>
#include<stack>
#include<cmath>
using namespace std;
int evaluatePostfix(string str) {
    stack<int>s;
    for (int i=0;i<str.length();i++) {
        char ch=str[i];
        if (isdigit(ch)) {
            s.push(ch-'0'); 
        }
        else {
            int val2=s.top(); 
            s.pop();
            int val1=s.top(); 
            s.pop();
            switch(ch) {
                case '+': s.push(val1 + val2); break;
                case '-': s.push(val1 - val2); break;
                case '*': s.push(val1 * val2); break;
                case '/': s.push(val1 / val2); break;
                case '^': s.push(pow(val1, val2)); break;
            }
        }
    }
return s.top();
}
int main() {
    string str1;
    cout<<"Enter Postfix Expression :";
    cin>>str1;
    cout<<"Result = "<<evaluatePostfix(str1)<<endl;
    return 0;
}
