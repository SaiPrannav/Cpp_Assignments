#include<iostream>
using namespace std;
int main(){
    int a,b,i,j,c=0;
    cout<<"Enter The Row Dimesion Of Matrix A You Want to Create :";
    cin>>a;
    cout<<"Enter The Column Dimesion Of Matrix A You Want to Create :";
    cin>>b;
    int A[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cout<<"Enter The "<<i+1<<","<<j+1<<" Element Of MAtrix A :";
            cin>>A[i][j];
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            c=c+A[i][j];
        }
        cout<<"The Sum of Elements Of Row "<<i+1<<" is :";
        cout<<c<<"\n";
        c=0;
    }
       for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            c=c+A[j][i];
        }
        cout<<"The Sum of Elements Of Column "<<i+1<<" is :";
        cout<<c<<"\n";
        c=0;
    }
    return 0;
}