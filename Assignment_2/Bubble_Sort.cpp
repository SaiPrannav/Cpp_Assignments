#include <iostream>
#include <vector>
using namespace std;
int main() {
    int a,temp,n;
    vector<int> arr{64,34,25,12,22,11,90};
    n=arr.capacity();
    bool flag=true;  
    for(int i=0;i<n;i++){
        for (int j=0;j<n-i;j++) {
            if (arr[j]>arr[j + 1]) {
                flag = false;  
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        if(flag){break;} 
    }
    cout<<"Sorted Array is :";
    for (int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}
