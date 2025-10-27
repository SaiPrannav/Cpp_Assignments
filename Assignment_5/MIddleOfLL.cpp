#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=nullptr;
    }
};
class LinkedList{
    Node* head;
public:
    LinkedList(){
        head=nullptr;
    }
    void insert(int val){
        Node* newNode=new Node(val);
        if(!head){
            head=newNode;
            return;
        }
        Node* temp=head;
        while(temp->next)
            temp=temp->next;
        temp->next=newNode;
    }
    void display(){
        Node* temp=head;
        while(temp){
            cout<<temp->data;
            if(temp->next) cout<<"->";
            temp=temp->next;
        }
        cout<<endl;
    }
    void findMiddle(){
        if(!head){
            cout<<"List is empty"<<endl;
            return;
        }
        Node* slow=head;
        Node* fast=head;
        while(fast&&fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        cout<<"Middle element: "<<slow->data<<endl;
    }
};
int main(){
    LinkedList list;
    list.insert(1);
    list.insert(2);
    list.insert(3);
    list.insert(4);
    list.insert(5);
    cout<<"Linked List: ";
    list.display();
    list.findMiddle();
    return 0;
}
