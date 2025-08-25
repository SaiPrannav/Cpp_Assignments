#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1,s2;
    cout<<"Enter First String :";
    cin>>s1;
    cout<<"Enter Second String :";
    cin>>s2;
    int a=s1.size();
    for(int i=0;i<a;i++){
        if(s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u'||s1[i]=='A'||s1[i]=='E'||s1[i]=='I'||s1[i]=='O'||s1[i]=='U'){
           for(int j=i;j<a;j++){
            s1[j]=s1[j+1];
           }
           a--;
           i--;
        }
    }
    s1.resize(a);
    s1.shrink_to_fit();
    cout<<"Frist String After Deleting Vowels Is :"<<s1<<endl;
    int b=s2.size();
    for(int i=0;i<b;i++){
        if(s2[i]=='a'||s2[i]=='e'||s2[i]=='i'||s2[i]=='o'||s2[i]=='u'||s2[i]=='A'||s2[i]=='E'||s2[i]=='I'||s2[i]=='O'||s2[i]=='U'){
           for(int j=i;j<b;j++){
            s2[j]=s2[j+1];
           }
           b--;
           i--;
        }
    }
    s1.resize(b);
    s1.shrink_to_fit();
    cout<<"Second String After Deleting Vowels Is :"<<s2<<endl;
    for(int i=0;i<s1.size();i++){
        if(s1[i]>='A'&&s1[i]<='Z'){
            s1[i]=s1[i]+32; 
        }
    }
    cout<<"First String In Lowercase Is :"<<s1<<endl;
    for(int i=0;i<s2.size();i++){
        if(s2[i]>='A'&&s2[i]<='Z'){
            s2[i]=s2[i]+32; 
        }
    }
    cout<<"Second String In Lowercase Is :"<<s2<<endl;
    int e=s1.size();
    for(int i=0;i<e/2;i++){
        temp=s1[i];
        s1[i]=s1[e-i-1];
        s1[e-i-1]=temp;
    }
    cout<<"First String Reversed String Is :"<<s1<<endl;
    int f=s2.size();
    for(int i=0;i<f/2;i++){
        temp=s2[i];
        s2[i]=s2[f-i-1];
        s2[f-i-1]=temp;
    }
    cout<<"Second String Reversed String Is :"<<s2<<endl;
    s1+=s2;
    cout<<"Concatenated String Is :"<<s1<<endl;
    int g;
    cout<<"Enter How Many Strings You Want To Enter For Sorting :";
    cin>>g;
    string s[g];
    for(int i=0;i<g;i++){
        cout<<"Enter The "<<i+1<<" String :";
        cin>>s[i];
    }
    for(int i=0;i<g-1;i++){
        for(int j=0;j<g-i-1;j++){
            if(s[j]>s[j+1]){
                string temp;
                temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
        }
    }
    cout<<"The Strings In Sorted Form Are :";
    for(int i=0;i<g;i++){
        cout<<s[i]<<" ";
    }
    return 0;
}

