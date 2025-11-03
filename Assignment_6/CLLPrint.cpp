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
class CircularLinkedList {
    Node* head;
public:
    CircularLinkedList() {
        head=NULL;
    }
    void insertNode(int val) {
        Node* newNode=new Node(val);
        if(head==NULL) {
            head=newNode;
            newNode->next=head;
            return;
        }
        Node* temp=head;
        while(temp->next!=head)
            temp=temp->next;
        temp->next=newNode;
        newNode->next=head;
    }
    void display() {
        if(head==NULL) {
            cout<<"List is empty!"<<endl;
            return;
        }
        Node* temp=head;
        do {
            cout<<temp->data<<" ";
            temp=temp->next;
        } while(temp!=head);
        cout<<head->data<<endl;
    }
};
int main() {
    CircularLinkedList cll;
    cll.insertNode(20);
    cll.insertNode(100);
    cll.insertNode(40);
    cll.insertNode(80);
    cll.insertNode(60);

    cout<<"Output: ";
    cll.display();

    return 0;
}
