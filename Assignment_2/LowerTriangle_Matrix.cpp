#include<iostream>
using namespace std;
class LowerTriangular{
    int n;
    int* arr;
public:
    LowerTriangular(int size){
        n=size;
        arr=new int[n*(n+1)/2];
        for(int i=0;i<n*(n+1)/2;i++) arr[i]=0;
    }
    void set(int i,int j,int val){
        if(i>=j) arr[(i*(i-1))/2+j-1]=val;
    }
    int get(int i,int j){
        if(i>=j) return arr[(i*(i-1))/2+j-1];
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
    LowerTriangular l(4);
    l.set(1,1,5);
    l.set(2,1,3);
    l.set(2,2,8);
    l.set(3,1,4);
    l.set(3,2,6);
    l.set(3,3,7);
    l.display();
}
