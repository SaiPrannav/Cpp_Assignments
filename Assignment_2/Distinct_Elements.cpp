#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a,b=0,i,j;
    cout<<"Enter Number Of Elements Of Array :";
    cin>>a;
    vector<int>arr(a);
    for(int i=0;i<a;i++){ 
        cout<<"Enter The "<<i+1<<" Element :";
        cin>>arr[i];
    }
    for(i=0;i<a;i++){
      for(j=0;j<i;j++){
            if(arr[i]==arr[j]){break;}
        }
        if(j==i){b++;}
    }
    cout<<"Total Numebr Of Distinct Elements In The Array Are :"<<b;
    return 0;
}
