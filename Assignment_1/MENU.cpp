#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a,b=0,d,e,f,g,h,j,k;
    int c;
    vector<int>arr;
    register int i;
    cout<<"\n--MENUE--"<<endl;
    cout<<"1.CREATE"<<endl;
    cout<<"2.DISPLAY"<<endl;
    cout<<"3.INSERT"<<endl;
    cout<<"4.DELETE"<<endl;
    cout<<"5.LINEAR SEARCH"<<endl;
    cout<<"6.EXIT"<<endl;
    cout<<"Enter The Serial Number Of The Respective Operation You Want To Perform :";
    cin>>a;
       if(a>0&&a<7){
        while(b==0){
           switch (a)
           {
           case 1:{
            cout<<"Enter The Number Of You Want In The Array :";
            cin>>c;
            arr.resize(c,0);
            for(i=0;i<c;i++){
                cout<<"Enter The "<<i+1<<" Element :";
                cin>>arr[i];
            }  
             cout<<"Enter The Serial Number Of The Respective Operation You Want To Perform :";
             cin>>a; 
           break;}
           case 2:{
             h=arr.size();
            cout<<"Entered/Modified Array Is :";
            for(i=0;i<h;i++){
                cout<<arr[i]<<" ";
            }
            cout<<"\n";
             cout<<"Enter The Serial Number Of The Respective Operation You Want To Perform :";
             cin>>a;
            break;}
           case 3:{
            cout<<"Enter The Index At Which You Want TO Insert :";
            cin>>d;
            cout<<"Enter The Elemet You Want To Insert At "<<d<<" Index :";
            cin>>e;
            h=arr.size();
            arr.resize(h);
            for(i=h-1;i>=d-1;i--){
                arr[i]=arr[i-1];
            }
            arr[d-1]=e;
             cout<<"Enter The Serial Number Of The Respective Operation You Want To Perform :";
             cin>>a;
            break;}
           case 4:{
            cout<<"Enter The Index Of The Elemet You Want To Delete :";
            cin>>k;
            h=arr.size();
            for(i=k-1;i<h-1;i++){
                arr[i]=arr[i+1];
            }
             arr.resize(h-1);
             arr.shrink_to_fit();
             cout<<"Enter The Serial Number Of The Respective Operation You Want To Perform :";
             cin>>a;
             break;
              }
          case 5:{
            cout<<"Enter The Element You Want To Search :";
            cin>>j;
             h=arr.size();
             for (int i = 0; i < h ; i++){
               if(arr[i]==j){
                cout<<"The Element is Found at Index :"<<i;
               }
             }
              cout<<"Enter The Serial Number Of The Respective Operation You Want To Perform :";
              cin>>a;
             break;}

           case 6:{
            cout<<"Exiting Programme...";
            b=b+1;
            break;
           }
           
           }
          
        }
    }
    else{
        cout<<"Enter A Valid Serial Number...";
    }
    arr.clear();
    arr.shrink_to_fit();
    return 0;
}



