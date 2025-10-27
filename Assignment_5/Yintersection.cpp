#include<iostream>
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
public:
    Node* head;
    LinkedList(){ head=nullptr; }
    void insert(int val){
        Node* newNode=new Node(val);
        if(head==nullptr){
            head=newNode;
            return;
        }
        Node* temp=head;
        while(temp->next!=nullptr){
            temp=temp->next;
        }
        temp->next=newNode;
    }
    void display(){
        Node* temp=head;
        while(temp!=nullptr){
            cout<<temp->data;
            if(temp->next!=nullptr) cout<<"->";
            temp=temp->next;
        }
        cout<<"->NULL"<<endl;
    }
};
Node* getIntersectionNode(Node* A,Node* B){
    Node* firstCurrNode=A;
    while(firstCurrNode!=nullptr){
        Node* secondCurrNode=B;
        while(secondCurrNode!=nullptr){
            if(firstCurrNode==secondCurrNode){
                return firstCurrNode;
            }
            secondCurrNode=secondCurrNode->next;
        }
        firstCurrNode=firstCurrNode->next;
    }
    return nullptr;
}
int main(){
    LinkedList list1, list2;
    list1.insert(1);
    list1.insert(2);
    list1.insert(3);
    list1.insert(4);
    list1.insert(5);
    list2.insert(9);
    list2.insert(10);
    list2.head->next->next = list1.head->next->next;
    cout<<"List 1: ";
    list1.display();
    cout<<"List 2: ";
    list2.display();
    Node* intersection = getIntersectionNode(list1.head, list2.head);
    if(intersection!=nullptr)
        cout<<"Intersection Node data: "<<intersection->data<<endl;
    else
        cout<<"No intersection found."<<endl;

    return 0;
}
