#include<iostream>
using namespace std;
class Queue{
    int front;
    int back;
    int capacity;
    int *arr;
    public:
    Queue(int s){
        arr=new int[s];
        front=-1;
        back=-1;
        capacity=s;
    }
    void enqueue(int a){
        if(front==-1&&back==-1){
            front++;
            back++;
            arr[front]=a;
        }
        else if(back==capacity-1){
            cout<<"Queue Overflow!!"<<endl;
        }
        else{
            back++;
            arr[back]=a;
        }
    }
    void dequeue(){
        if(front==-1||front>back){
            cout<<"Queue Undrflow!!"<<endl;
        }
        else{
            front++;
        }
    }
    void size(){
        if(front==-1||front>back){
            cout<<"Queue Size Is Zero : Underflow!!"<<endl;
        }
        else cout<<"Queue Size Is :"<<back-front+1<<endl;
    }
    bool isempty(){
        if(front==-1||front>back){
            return true;
        }
        else return false;
    }
    bool isfull(){
        if(back==capacity-1){
            return true;
        }
        else return false;
    }
    void printqueue(){
        if(front==-1||front>back){
            cout<<"Queue Underflow!!"<<endl;
        }
        else{
        for(int i=front;i<=back;i++){
            cout<<arr[i]<<"\t";
        }
      }
    }
    int peek(){
        if(front==-1||front>back) return -1;
        else return arr[front];
    }

};
int main(){
 Queue Q1(4);
 Q1.enqueue(10);
 Q1.enqueue(20);
 Q1.enqueue(30);
 Q1.dequeue();
 Q1.enqueue(40);
 Q1.enqueue(50);
 Q1.size();
 Q1.printqueue();
return 0;
}