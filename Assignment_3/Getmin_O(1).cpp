#include <iostream>
#include <stack>
using namespace std;

class MinStack {
    stack<int> mainStack;
    stack<int> minStack;

public:
    void push(int x) {
        mainStack.push(x);

        if (minStack.empty() || x <= minStack.top()) {
            minStack.push(x);
        }
    }

    void pop() {
        if (mainStack.empty()) return;


        if (mainStack.top() == minStack.top()) {
            minStack.pop();
        }

        mainStack.pop();
    }

    int top() {
        if (mainStack.empty()) return -1;
        return mainStack.top();
    }

    int getMin() {
        if (minStack.empty()) return -1;
        return minStack.top();
    }
};

int main() {
    MinStack s;
    s.push(5);
    s.push(3);
    s.push(7);
    s.push(2);
    cout << "Minimum: " << s.getMin() << endl; 
    s.pop();
    cout << "Minimum after pop: " << s.getMin() << endl; 
    return 0;
}
