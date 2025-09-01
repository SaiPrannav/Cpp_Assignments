#include<iostream>
using namespace std;

class stack{
    int capacity;
    int* arr;
    int top_index;

public:
    stack(int c){
        capacity=c;
        arr=new int[c];
        top_index=-1;
    }
    void push(int a){
        if(top_index==capacity-1){
            cout<<"OverFlow"<<endl;
            return;
        }
        top_index++;
        arr[top_index]=a;
    }
    void pop(){
        if(top_index==-1){
            cout<<"UnderFlow"<<endl;
            return;
        }
        top_index--;
    }
    void peek(){
        if(top_index==-1){
            cout<<"UnderFlow"<<endl;
            return;
        }
        cout<<"The Top Element Of The Stack Is : "<<arr[top_index]<<endl;
    } 
    void isempty(){
        if(top_index==-1)
            cout<<"Stack Is Empty"<<endl; 
        else
            cout<<"Stack Is Not Empty"<<endl;
    }
    int size(){
        return top_index+1;
    }
    void isfull(){
        if(top_index==capacity-1)
            cout<<"Stack Is Full"<<endl;
        else
            cout<<"Stack Is Not Full"<<endl;
    }
    void Display(){
        if(top_index==-1){
            cout<<"No Elements To Display"<<endl;
            return;
        }
        cout<<"The Stack Elements Are : ";
        for(int i=top_index;i>=0;i--){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    stack st(10);
    bool Flag=true;
    int a,b;
    while(Flag){
        cout<<"\n--MENU--"<<endl;
        cout<<"1. ENTER AN ELEMENT"<<endl;
        cout<<"2. REMOVE TOP ELEMENT"<<endl;
        cout<<"3. CHECK IF EMPTY"<<endl;
        cout<<"4. CHECK IF FULL"<<endl;
        cout<<"5. DISPLAY STACK"<<endl;
        cout<<"6. SEE TOP ELEMENT OF STACK"<<endl;
        cout<<"7. EXIT"<<endl;
        cout<<"Enter The Serial Number Of The Operation You Want To Perform :";
        cin>>a;
        switch(a){
            case 1:
                cout<<"Enter The Element You Want To Insert: ";
                cin>>b;
                st.push(b);
                break;
            case 2:
                st.pop();
                break;
            case 3:
                st.isempty();
                break;
            case 4:
                st.isfull();
                break;
            case 5:
                st.Display();
                break;
            case 6:
                st.peek();
                break;
            case 7:
                cout<<"Exiting....."<<endl;
                Flag=false;
                break;
            default:
                cout<<"Enter A Valid Serial Number..."<<endl;
        }
    }
    return 0;
}
