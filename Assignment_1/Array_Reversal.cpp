#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int>arr(n);
    int a,i;
    for(int i=0;i<n;i++){
        cout<<"Enetr The "<<i<<" Element";
        cin>>arr[i];
    }
    cout<<"The Entered Element Are :";
    for(int i=0;i<n;i++){
      cout<<arr[i];
    }
     for(int i=0;i<n/2;i++){
      arr[i]=arr[i]^arr[n-i-1];
      arr[n-i-1]=arr[i]^arr[n-i-1];
      arr[i]=arr[i]^arr[n-i-1];
    }
    cout<<"\nThe Reversed Array is :";
     for(int i=0;i<n;i++){
      cout<<arr[i];
    }
    

    return 0;
}