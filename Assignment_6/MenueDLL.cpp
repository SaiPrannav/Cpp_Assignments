#include <iostream>
using namespace std;
class DNode {
public:
    int data;
    DNode* prev;
    DNode* next;
    DNode(int val) {
        data=val;
        prev=next=NULL;
    }
};
class DoublyLinkedList {
    DNode* head;
public:
    DoublyLinkedList() {
        head=NULL;
    }
    void insertAtBeginning(int val) {
        DNode* newNode=new DNode(val);
        if(head==NULL) {
            head=newNode;
            return;
        }
        newNode->next=head;
        head->prev=newNode;
        head=newNode;
    }
    void insertAtEnd(int val) {
        DNode* newNode=new DNode(val);
        if(head==NULL) {
            head=newNode;
            return;
        }
        DNode* temp=head;
        while(temp->next!=NULL)
            temp=temp->next;
        temp->next=newNode;
        newNode->prev=temp;
    }
    void insertAfter(int key,int val) {
        DNode* temp=head;
        while(temp!=NULL && temp->data!=key)
            temp=temp->next;
        if(temp==NULL) {
            cout<<"Node not found!\n";
            return;
        }
        DNode* newNode=new DNode(val);
        newNode->next=temp->next;
        newNode->prev=temp;
        if(temp->next)
            temp->next->prev=newNode;
        temp->next=newNode;
    }
    void insertBefore(int key,int val) {
        DNode* temp=head;
        while(temp!=NULL && temp->data!=key)
            temp=temp->next;
        if(temp==NULL) {
            cout<<"Node not found!\n";
            return;
        }
        DNode* newNode=new DNode(val);
        newNode->next=temp;
        newNode->prev=temp->prev;
        if(temp->prev)
            temp->prev->next=newNode;
        else
            head=newNode;
        temp->prev=newNode;
    }
    void deleteNode(int key) {
        if(head==NULL) {
            cout<<"List is empty!\n";
            return;
        }
        DNode* temp=head;
        if(temp->data==key) {
            head=temp->next;
            if(head)
                head->prev=NULL;
            delete temp;
            cout<<"Node deleted.\n";
            return;
        }
        while(temp!=NULL && temp->data!=key)
            temp=temp->next;
        if(temp==NULL) {
            cout<<"Node not found!\n";
            return;
        }
        if(temp->next)
            temp->next->prev=temp->prev;
        if(temp->prev)
            temp->prev->next=temp->next;
        delete temp;
        cout<<"Node deleted.\n";
    }
    void searchNode(int key) {
        DNode* temp=head;
        int pos=1;
        while(temp!=NULL) {
            if(temp->data==key) {
                cout<<"Node found at position "<<pos<<endl;
                return;
            }
            pos++;
            temp=temp->next;
        }
        cout<<"Node not found!\n";
    }
    void display() {
        DNode* temp=head;
        cout<<"Doubly Linked List: ";
        while(temp!=NULL) {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main() {
    DoublyLinkedList dll;
    int choice,val,key;
    while(true) {
        cout<<"\n--- DOUBLY LINKED LIST MENU ---\n";
        cout<<"1. Insert at Beginning\n";
        cout<<"2. Insert at End\n";
        cout<<"3. Insert After\n";
        cout<<"4. Insert Before\n";
        cout<<"5. Delete Node\n";
        cout<<"6. Search Node\n";
        cout<<"7. Display\n";
        cout<<"8. Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;
        cout<<endl;
        switch(choice) {
        case 1:
            cout<<"Enter value: ";
            cin>>val;
            dll.insertAtBeginning(val);
            break;
        case 2:
            cout<<"Enter value: ";
            cin>>val;
            dll.insertAtEnd(val);
            break;
        case 3:
            cout<<"Enter key and value: ";
            cin>>key>>val;
            dll.insertAfter(key,val);
            break;
        case 4:
            cout<<"Enter key and value: ";
            cin>>key>>val;
            dll.insertBefore(key,val);
            break;
        case 5:
            cout<<"Enter value to delete: ";
            cin>>key;
            dll.deleteNode(key);
            break;
        case 6:
            cout<<"Enter value to search: ";
            cin>>key;
            dll.searchNode(key);
            break;
        case 7:
            dll.display();
            break;
        case 8:
            cout<<"Program exited.\n";
            return 0;
        default:
            cout<<"Invalid choice!\n";
        }
    }
}
