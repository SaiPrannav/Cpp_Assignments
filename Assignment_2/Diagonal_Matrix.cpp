#include<iostream>
using namespace std;
class Diagonal{
    int a;
    int* arr;
public:
    Diagonal(int size){
        a=size;
        arr=new int[a];
        for(int i=0;i<a;i++){
        arr[i]=0;}
    }
    void set(int i,int j,int b){
        if(i==j) arr[i-1]=b;
    }
    int get(int i,int j){
        if(i==j) return arr[i-1];
        else return 0;
    }
    void display(){
        for(int i=1;i<=a;i++){
            for(int j=1;j<=a;j++){
                cout<<get(i,j)<<" ";
            }
            cout<<endl;
        }
    }
};
int main(){
    Diagonal d(4);
    d.set(1,1,5);
    d.set(2,2,8);
    d.set(3,3,9);
    d.set(4,4,6);
    d.display();
}
