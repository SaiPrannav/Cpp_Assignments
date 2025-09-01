#include<iostream>
using namespace std;
class UpperTriangular{
    int n;
    int* arr;
public:
    UpperTriangular(int size){
        n=size;
        arr=new int[n*(n+1)/2];
        for(int i=0;i<n*(n+1)/2;i++) arr[i]=0;
    }
    void set(int i,int j,int val){
        if(i<=j) arr[(j*(j-1))/2+i-1]=val;
    }
    int get(int i,int j){
        if(i<=j) return arr[(j*(j-1))/2+i-1];
        else return 0;
    }
    void display(){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cout<<get(i,j)<<" ";
            }
            cout<<endl;
        }
    }
};
int main(){
    UpperTriangular u(4);
    u.set(1,1,5);
    u.set(1,2,7);
    u.set(1,3,3);
    u.set(2,2,8);
    u.set(2,3,6);
    u.set(3,3,9);
    u.display();
}
