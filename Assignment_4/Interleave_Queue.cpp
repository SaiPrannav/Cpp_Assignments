#include<iostream>
#include<queue>
using namespace std;
queue<int> interleave(queue<int>&arr){
    if(arr.size()%2!=0){
        cout<<"The Given Vector Cannot Br Interleaved "<<endl;
    }
    queue<int>qu;
    int b=arr.size();
    for(int i=0;i<b/2;i++){
        qu.push(arr.front());
        arr.pop();
    }
    while(not qu.empty()){
        arr.push(qu.front());
        qu.pop();
        arr.push(arr.front());
        arr.pop();
    }
    return arr;
}
int main(){
    queue<int>a;
    a.push(4);
    a.push(7);
    a.push(11);
    a.push(20);
    a.push(5);
    a.push(9);
    queue<int>output;
    output=interleave(a);
    while(not output.empty()){
        cout<<output.front()<<"\t";
        output.pop();
    }
    return 0;
}