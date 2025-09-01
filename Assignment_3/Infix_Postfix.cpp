#include<iostream>
#include<stack>
using namespace std;
int precedence(char op) {
    if(op=='+' || op=='-') return 1;
    if(op=='*' || op=='/') return 2;
    if(op=='^') return 3;
    return 0;
}
string InfixToPostfix(string str) {
    stack<char>s;
    string Postfix="";
    for(int i=0; i<str.length(); i++) {
        char ch=str[i];
        if(isalnum(ch)) {
            Postfix+=ch;
        }
        else if(ch=='(') {
            s.push(ch);
        }
        else if(ch==')') {
            while(not s.empty()&&s.top()!='(') {
                Postfix+=s.top();
                s.pop();
            }
            s.pop();
        }
        else {
            while(not s.empty()&&precedence(s.top())>=precedence(ch)) {
                Postfix+=s.top();
                s.pop();
            }
            s.push(ch);
        }
    }
    while(not s.empty()) {
        Postfix += s.top();
        s.pop();
    }

return Postfix;
}

int main() {
    string str1;
    cout<<"Enter The Infix Expression :";
    cin>>str1;
    cout<<"The Postfix Expression Of The Infix Expression Is :"<<InfixToPostfix(str1)<<endl;
    return 0;
}
