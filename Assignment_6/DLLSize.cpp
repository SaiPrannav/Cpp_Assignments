#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* prev;
    Node* next;
    Node(int val) {
        data=val;
        prev=next=NULL;
    }
};
class DoublyLinkedList {
    Node* head;
public:
    DoublyLinkedList() {
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
        newNode->prev=temp;
    }
    int getSize() {
        int count=0;
        Node* temp=head;
        while(temp!=NULL) {
            count++;
            temp=temp->next;
        }
        return count;
    }
    void display() {
        Node* temp=head;
        while(temp!=NULL) {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main() {
    DoublyLinkedList dll;
    dll.insertNode(10);
    dll.insertNode(20);
    dll.insertNode(30);
    dll.insertNode(40);
    cout<<"Doubly Linked List: ";
    dll.display();
    cout<<"Size of Doubly Linked List = "<<dll.getSize()<<endl;

    return 0;
}
