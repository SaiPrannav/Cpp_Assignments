#include <iostream>
#include <string>
#include <queue>
using namespace std;

string nonrepeating(string &str) {
    queue<char> qu;
    int freq[256] = {0};   
    string out="";
    for (int i=0;i<str.size();i++) {
        freq[str[i]]++;       
        qu.push(str[i]);
        while (!qu.empty() && freq[qu.front()] > 1) {
            qu.pop();
        }
        if (qu.empty()) {
            out+="-1"; 
        } else {
            out+=qu.front(); 
        }
    }
    return out;
}

int main() {
    string in="abcabc";
    string ans=nonrepeating(in);
    cout<<ans;   
    return 0;
}
