#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node(int val) {
        data=val;
        next=NULL;
    }
};
class LinkedList {
    Node* head;
public:
    LinkedList() {
        head=NULL;
    }
    void insertNode(int val) {
        Node* newNode=new Node(val);
        if(head==NULL) {
            head=newNode;
            return;
        }
        Node* temp=head;
        while(temp->next!=NULL)
            temp=temp->next;
        temp->next=newNode;
    }
    bool isCircular() {
        if(head==NULL)
            return false;
        Node* temp=head->next;
        while(temp!=NULL && temp!=head)
            temp=temp->next;
        return (temp==head);
    }
    void display() {
        Node* temp=head;
        while(temp!=NULL && count<limit) {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
};
int main() {
    LinkedList list;
    list.insertNode(10);
    list.insertNode(20);
    list.insertNode(30);
    list.insertNode(40);
    cout<<"Linked List: ";
    list.display();
    if(list.isCircular())
        cout<<"The Linked List is Circular."<<endl;
    else
        cout<<"The Linked List is NOT Circular."<<endl;
    return 0;
}
