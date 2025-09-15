#include <iostream>
#include <queue>
using namespace std;
string decimalToBinary(int num) {
    string bin = "";
    while (num > 0) {
        bin = char((num % 2) + '0') + bin; 
        num /= 2;
    }
    return bin;
}
void generatePrintBinary(int n) {
    queue<int> q;
    for (int i = 1; i <= n; i++) {
        q.push(i);
    }
    while (!q.empty()) {
        int num = q.front();
        q.pop();
        cout<<decimalToBinary(num)<<"\t";
    }
}
int main() {
    int n=5;
    generatePrintBinary(n);
    return 0;
}
