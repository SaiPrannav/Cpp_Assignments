#include<iostream>
using namespace std;
int main(){
    int a,b,i,j,c,d,m;
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
    cout<<"Enter The Row Dimesion Of Matrix B You Want to Create :";
    cin>>c;
    cout<<"Enter The Column Dimesion Of Matrix B You Want to Create :";
    cin>>d;
    int B[c][d];
    for(int i=0;i<c;i++){
        for(int j=0;j<d;j++){
            cout<<"Enter The "<<i+1<<","<<j+1<<" Element Of MAtrix B :";
            cin>>B[i][j];
        }
    }
    if(b==c){
     int C[a][d];
     cout<<"The Matrix Multiplication Of The of A and B is :\n";
     for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            for(int m=0;m<d;m++){
             C[i][j]=A[i][m]*B[m][j];
            }
        }
     }
     for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cout<<C[i][j]<<"\t";
        }
        cout<<"\n";
     }

    }
    else{
        cout<<"The Two Matrix Cannot Be Multiplied...";
    }

    
    return 0;
}