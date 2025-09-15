#include <iostream>  
#include <queue>     
using namespace std;
class StackOneQueue {
private:
    queue<int>q;
public:
    void push(int x) {
        q.push(x);                     
        int n=q.size()-1;     
        for(int i=0;i<n;i++){  
            q.push(q.front());
            q.pop();
        }
    }
    void pop() {
        if (q.empty()) {               
            cout<<"Stack is empty. Cannot pop.\n";
            return;
        }
        q.pop();                       
    }
    int top() {
        if (q.empty()) {               
            cout<<"Stack is empty. No top.\n";
            return -1;
        }
        return q.front();             
    }
    bool empty() const {
        return q.empty();             
    }
    int size() const {
        return (int)q.size();        
    }
};
int main() {
    cout << "Demo: Stack using ONE queues\n";
    StackOneQueue s1;
    s1.push(100); s1.push(200); s1.push(300);
    cout<<"top:"<<s1.top();
    s1.pop();
    cout<<"top after pop: "<<s1.top();
    return 0;
}

