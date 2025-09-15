#include <iostream>
#include <queue>
using namespace std;
int minIndex(queue<int>& q, int sortedIndex) {
    int min_index=-1;
    int min_val=INT_MAX;
    int n=q.size();
    for (int i=0;i<n;i++) {
        int curr=q.front();
        q.pop();
        if (curr<=min_val&&i<=sortedIndex) {
            min_val=curr;
            min_index=i;
        }
        q.push(curr);
    }
    return min_index;
}
void insertMinToRear(queue<int>& q,int min_index,int n) {
    int min_val;
    for (int i=0;i<n;i++) {
        int curr=q.front();
        q.pop();
        if (i==min_index) {
            min_val=curr;
        } else {
            q.push(curr); 
        }
    }
    q.push(min_val);
}
void sortQueue(queue<int>& q) {
    int n=q.size();
    for (int i=1; i<=n;i++) {
        int min_index=minIndex(q,n-i);
        insertMinToRear(q,min_index,n);
    }
}
int main() {
    queue<int> q;
    q.push(30);
    q.push(11);
    q.push(15);
    q.push(4);
    sortQueue(q);
    cout<<"Sorted Queue: ";
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}
