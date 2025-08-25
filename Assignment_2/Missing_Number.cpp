#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a,b,c,d,e,f;
    cout<<"Enter The Number Of Elements Of The Array :";
    cin>>a;
    vector<int>arr(a-1);
    cout<<"Enter The Elements In the Ascending Order!!\n";
    for(int i=0;i<a-1;i++){
        cout<<"Enter The "<<i+1<<" Element Of The Array :";
        cin>>arr[i];
    }
     b=a*(a+1)/2,c=0;
    for(int i=0;i<a-1;i++){c+=arr[i];}
    cout<<"Missing Number With Linear Search Is: "<<b-c<<endl;
     d=0,e=a-2;
    while(d<=e){
        f=(d+e)/2;
        if(arr[f]==f+1){
            d=f+1;
        }
        else {
            e=f-1;
        }
    }
    cout<<"Missing Number With Binary Search Is: "<<d+1<<endl;

    return 0;
}
