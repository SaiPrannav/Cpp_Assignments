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
    void deleteOccurrences(int key){
        int count=0;
        while(head&&head->data==key){
            Node* temp=head;
            head=head->next;
            delete temp;
            count++;
        }
        Node* curr=head;
        while(curr&&curr->next){
            if(curr->next->data==key){
                Node* temp=curr->next;
                curr->next=curr->next->next;
                delete temp;
                count++;
            }else{
                curr=curr->next;
            }
        }
        cout<<"Count: "<<count<<endl;
        cout<<"Updated Linked List: ";
        display();
    }
};
int main(){
    LinkedList list;
    list.insert(1);
    list.insert(2);
    list.insert(1);
    list.insert(2);
    list.insert(1);
    list.insert(3);
    list.insert(1);
    cout << "Original Linked List: ";
    list.display();
    int key = 1;
    list.deleteOccurrences(key);
    return 0;
}
