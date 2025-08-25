#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr;
    int c,b=0,h;
    register int i,m,j;
    char a;
    cout<<"Enter The Number Of You Want In The Array :";
            cin>>c;
            arr.resize(c,0);
            for(i=0;i<c;i++){
                cout<<"Enter The "<<i+1<<" Element :";
                cin>>arr[i];}
    cout<<"Enter 'Y' for removing Duplicate Elements in the array or 'N' For Exiting :";
    cin>>a;
    while(b==0){
    if(a=='Y'){
          h=arr.size();
            cout<<"Entered Array Is :";
            for(i=0;i<h;i++){
                cout<<arr[i]<<" ";
            }
        for(i=0;i<h;i++){
            for(j=i+1;j<h;j++){
                if(arr[i]==arr[j]){
                  for(m=j;m<h-1;m++){
                    arr[m]=arr[m+1];
                  }
                  h--;
                  arr.resize(h);
                  j--;
                }
            }
        }
         h=arr.size();
            cout<<"\nModified Array Is :";
            for(i=0;i<h;i++){
                cout<<arr[i]<<" ";
            }
            b+=1;
        }    
    
    else if(a=='N'){
      cout<<"Exiting ...";
      b+=1;
    }
    else{
        cout<<"Enter A Valid Charater!!";
    }
}
    return 0;
}