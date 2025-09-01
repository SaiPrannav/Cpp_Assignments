#include<iostream>
using namespace std;
class TriDiagonal{
    int n;
    int* arr; 
public:
    TriDiagonal(int size){
        n=size;
        arr=new int[3*n-2];
        for(int i=0;i<3*n-2;i++) arr[i]=0;
    }
    void set(int i,int j,int val){
        if(i-j==0) arr[i-1]=val; 
        else if(i-j==1) arr[n+i-2]=val; 
        else if(j-i==1) arr[2*n+i-2]=val; 
    }
    int get(int i,int j){
        if(i-j==0) return arr[i-1];
        else if(i-j==1) return arr[n+i-2];
        else if(j-i==1) return arr[2*n+i-2];
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
    TriDiagonal t(4);
    t.set(1,1,5);
    t.set(2,2,8);
    t.set(3,3,6);
    t.set(4,4,9);
    t.set(1,2,1);
    t.set(2,1,2);
    t.display();
}
