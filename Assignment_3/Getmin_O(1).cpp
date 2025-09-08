#include <bits/stdc++.h>
using namespace std;
class MinStack {
    stack<long long> st;
    long long mini;
public:
    MinStack() {
        while (!st.empty()) st.pop();
        mini = INT_MAX;
    }
    void push(int value) {
        long long val = value;
        if (st.empty()) {
            mini = val;
            st.push(val);
        } else {
            if (val < mini) {
                // store modified value
                st.push(2LL * val - mini);
                mini = val;
            } else {
                st.push(val);
            }
        }
    }
    void pop() {
        if (st.empty()) return;

        long long el = st.top();
        st.pop();

        if (el < mini) {
          
            mini = 2LL * mini - el;
        }
    }
    int top() {
        if (st.empty()) return -1;

        long long el = st.top();
        if (el < mini) return (int)mini;
        return (int)el;
    }
    int getMin() {
        return (int)mini;
    }
};
int main() {
    MinStack st;
    st.push(5);
    st.push(3);
    st.push(7);
    cout << "Current Min: " << st.getMin() << endl;
    cout << "Top: " << st.top() << endl;          
    st.pop();
    cout << "Top after pop: " << st.top() << endl; 
    cout << "Current Min: " << st.getMin() << endl; 
    st.pop();
    cout << "Current Min after popping 3: " << st.getMin() << endl; 
    return 0;
}
