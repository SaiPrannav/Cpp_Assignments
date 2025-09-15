#include <iostream>   
#include <queue>      
using namespace std;
class StackTwoQueues {
private:
    queue<int> q1;
    queue<int> q2; 
public:
    void push(int x) {
        q2.push(x);                    
        while (not q1.empty()) {          
            q2.push(q1.front());
            q1.pop();
        }
        swap(q1, q2);                  
    }
    void pop() {
        if (q1.empty()) {             
            cerr << "Stack is empty. Cannot pop.\n";
            return;
        }
        q1.pop();                     
    }
    int top() {
        if (q1.empty()) {        
            cerr << "Stack is empty. No top.\n";
            return -1;                 
        }
        return q1.front();             
    }
    bool empty() const {
        return q1.empty();            
    }
    int size() const {
        return (int)q1.size();         
    }
};
int main() {
    cout << "Demo: Stack using TWO queues\n";
    StackTwoQueue s1;
    s1.push(100); s1.push(200); s1.push(300);
    cout<<"top:"<<s1.top();
    s1.pop();
    cout<<"top after pop: "<<s1.top();
    return 0;
}
