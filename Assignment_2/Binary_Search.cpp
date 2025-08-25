#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a,b,c,d,e,i;
    vector<int>arr;
    cout<<"Enter Number Of Elements Of the Array :";
    cin>>a;
    arr.resize(a);
    cout<<"Enter The Elements in the Ascending Order!!"<<endl;
    for(int i=0;i<a;i++){
        cout<<"Enter The "<<i<<" Element :";
        cin>>arr[i];
    }
    cout<<"Now Enter The Element You Want To Find In The Array :";
    cin>>b;
    c=0;d=a-1;
    while(c<=d){
        e=(c+d)/2;
        if(arr[e]==b){
          cout<<"The Element Is Present At The Index "<<e+1<<" In the Array";
          break;
        }
        else if(arr[e]<b){
            c=e+1;
        }
        else if(arr[e]>b){
            d=e-1;
        }

    }
    return 0;
}  