#include<iostream>
#include<stack>
using namespace std;
bool isBalanced(string str) {
    stack<char>s;
    for (int i=0;i<str.length();i++) {
        char ch=str[i];
        if(ch=='('||ch=='{'||ch=='['){
            s.push(ch);
        }
        else if(ch==')'||ch=='}'||ch==']'){
            if (s.empty()) return false;
            char top = s.top();
            s.pop();
            if ((ch==')' && top!='(') || 
                (ch=='}' && top!='{') || 
                (ch==']' && top!='[')) {
                return false;
            }
        }
    }
    return s.empty();
}
int main() {
    string str1;
    cout<<"Enter The String :";
    cin>>str1;
    if (isBalanced(str1)) {
        cout<<"The String Is Balanced"<<endl;
    } else {
        cout<<"The String Is Not Balanced"<<endl;
    }
    return 0;
}
