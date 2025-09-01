#include<iostream>
using namespace std;
class Symmetric{
    int n;
    int* arr;
public:
    Symmetric(int size){
        n=size;
        arr=new int[n*(n+1)/2];
        for(int i=0;i<n*(n+1)/2;i++) arr[i]=0;
    }
    void set(int i,int j,int val){
        if(i>=j) arr[(i*(i-1))/2+j-1]=val;
        else arr[(j*(j-1))/2+i-1]=val; // symmetry
    }
    int get(int i,int j){
        if(i>=j) return arr[(i*(i-1))/2+j-1];
        else return arr[(j*(j-1))/2+i-1];
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
    Symmetric s(4);
    s.set(1,1,5);
    s.set(2,1,7);
    s.set(2,2,9);
    s.set(3,1,8);
    s.set(3,2,6);
    s.set(3,3,4);
    s.display();
}
