#include <bits/stdc++.h>
using namespace std;
void dailyTemperatures(vector<int>&T)
{
    int n = T.size();
    vector<int>outvector(n, -1);
    stack<int>s;
    for (int i = 0; i < n; i++) {
        while (!s.empty()&& T[s.top()] < T[i]) {
            daysOfWait[s.top()] = i - s.top();
            s.pop();
        }
        s.push(i);
    }
    for (int i = 0; i < n; i++) {
        cout << daysOfWait[i] << " ";
    }
}
int main()
{
    vector<int> arr{ 73, 74, 75, 71,69, 72, 76, 73 };
    dailyTemperatures(arr);
    return 0;
}
