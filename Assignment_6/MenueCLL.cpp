#include <iostream>
using namespace std;
class CNode {
public:
    int data;
    CNode* next;
    CNode(int val) {
        data=val;
        next=NULL;
    }
};
class CircularLinkedList {
    CNode* head;
public:
    CircularLinkedList() {
        head=NULL;
    }
    void insertAtBeginning(int val) {
        CNode* newNode=new CNode(val);
        if(head==NULL) {
            head=newNode;
            newNode->next=head;
            return;
        }
        CNode* temp=head;
        while(temp->next!=head)
            temp=temp->next;
        temp->next=newNode;
        newNode->next=head;
        head=newNode;
    }
    void insertAtEnd(int val) {
        CNode* newNode=new CNode(val);
        if(head==NULL) {
            head=newNode;
            newNode->next=head;
            return;
        }
        CNode* temp=head;
        while(temp->next!=head)
            temp=temp->next;
        temp->next=newNode;
        newNode->next=head;
    }
    void insertAfter(int key,int val) {
        if(head==NULL) {
            cout<<"List is empty!\n";
            return;
        }
        CNode* temp=head;
        do {
            if(temp->data==key) {
                CNode* newNode=new CNode(val);
                newNode->next=temp->next;
                temp->next=newNode;
                return;
            }
            temp=temp->next;
        } while(temp!=head);
        cout<<"Node not found!\n";
    }
    void deleteNode(int key) {
        if(head==NULL) {
            cout<<"List is empty!\n";
            return;
        }
        CNode* curr=head;
        CNode* prev=NULL;
        if(curr->data==key) {
            CNode* temp=head;
            while(temp->next!=head)
                temp=temp->next;
            if(head->next==head) {
                delete head;
                head=NULL;
            } else {
                temp->next=head->next;
                CNode* toDelete=head;
                head=head->next;
                delete toDelete;
            }
            cout<<"Node deleted.\n";
            return;
        }
        do {
            prev=curr;
            curr=curr->next;
            if(curr->data==key) {
                prev->next=curr->next;
                delete curr;
                cout<<"Node deleted.\n";
                return;
            }
        } while(curr!=head);
        cout<<"Node not found!\n";
    }
    void searchNode(int key) {
        if(head==NULL) {
            cout<<"List is empty!\n";
            return;
        }
        CNode* temp=head;
        int pos=1;
        do {
            if(temp->data==key) {
                cout<<"Node found at position "<<pos<<endl;
                return;
            }
            temp=temp->next;
            pos++;
        } while(temp!=head);
        cout<<"Node not found!\n";
    }
    void display() {
        if(head==NULL) {
            cout<<"Circular List is empty!\n";
            return;
        }
        CNode* temp=head;
        cout<<"Circular Linked List: ";
        do {
            cout<<temp->data<<" ";
            temp=temp->next;
        } while(temp!=head);
        cout<<endl;
    }
};
int main() {
    CircularLinkedList cll;
    int choice,val,key;
    while(true) {
        cout<<"\n--- CIRCULAR LINKED LIST MENU ---\n";
        cout<<"1. Insert at Beginning\n";
        cout<<"2. Insert at End\n";
        cout<<"3. Insert After\n";
        cout<<"4. Delete Node\n";
        cout<<"5. Search Node\n";
        cout<<"6. Display\n";
        cout<<"7. Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;
        cout<<endl;
        switch(choice) {
        case 1:
            cout<<"Enter value: ";
            cin>>val;
            cll.insertAtBeginning(val);
            break;
        case 2:
            cout<<"Enter value: ";
            cin>>val;
            cll.insertAtEnd(val);
            break;
        case 3:
            cout<<"Enter key and value: ";
            cin>>key>>val;
            cll.insertAfter(key,val);
            break;
        case 4:
            cout<<"Enter value to delete: ";
            cin>>key;
            cll.deleteNode(key);
            break;
        case 5:
            cout<<"Enter value to search: ";
            cin>>key;
            cll.searchNode(key);
            break;
        case 6:
            cll.display();
            break;
        case 7:
            cout<<"Program exited.\n";
            return 0;
        default:
            cout<<"Invalid choice!\n";
        }
    }
}
