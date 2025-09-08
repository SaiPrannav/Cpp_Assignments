#include <iostream>
#include <vector>
using namespace std;
vector<int> nexgreater(vector<int>& a) {
    int n = a.size();
    stack<int> st;
    vector<int> ans;
    ans.reserve(n);
    for (int i = 0; i < n; i++) {
        while (!st.empty() && st.top() <= a[i]) {
            st.pop();
        }
        if (st.empty()) {
            ans.push_back(-1);
        } else {
            ans.push_back(st.top());
        }
        st.push(a[i]);
    }
    return ans;
}
int main() {
    vector<int> a = {4, 5, 2, 10, 8};
    vector<int> res = nexgreater(a);
    cout << "Next Greater Elements: ";
    for (int x : res) cout << x << " ";
    cout << endl;
    return 0;
}
