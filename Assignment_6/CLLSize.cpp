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
    int getSize() {
        if(head==NULL)
            return 0;
        int count=0;
        Node* temp=head;
        do {
            count++;
            temp=temp->next;
        } while(temp!=head);
        return count;
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
        cout<<endl;
    }
};
int main() {
    CircularLinkedList cll;
    cll.insertNode(5);
    cll.insertNode(15);
    cll.insertNode(25);
    cll.insertNode(35);
    cout<<"Circular Linked List: ";
    cll.display();
    cout<<"Size of Circular Linked List = "<<cll.getSize()<<endl;

    return 0;
}
