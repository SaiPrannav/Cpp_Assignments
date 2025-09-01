#include<iostream>
#include<stack>
using namespace std;
int main() {
    string str="DataStructure";
    stack<char>s;
    for(int i=0; i<str.length(); i++) {
        s.push(str[i]);
    }
    string rev="";
    while(not s.empty()) {
        rev+=s.top();
        s.pop();
    }
    cout<<"Original String: "<<str<<endl;
    cout<<"Reversed String: "<<rev<<endl;
    return 0;
}

