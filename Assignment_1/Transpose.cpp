#include<iostream>
using namespace std;
int main(){
    int a,b,i,j;
    cout<<"Enter The Row Dimesion Of Matrix A You Want to Create :";
    cin>>a;
    cout<<"Enter The Column Dimesion Of Matrix A You Want to Create :";
    cin>>b;
    int A[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cout<<"Enter The "<<i+1<<","<<j+1<<" Element Of Matrix A :";
            cin>>A[i][j];
        }
    }
    int B[b][a];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            B[j][i]=A[i][j];
        }

    }
    cout<<"The Transpose Of the Matrix A is :\n";
    for(int i=0;i<b;i++){
        for(int j=0;j<a;j++){
            cout<<B[i][j]<<"\t";
        }
        cout<<"\n";
     }
   return 0;
    
}