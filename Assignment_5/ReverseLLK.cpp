#include<iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = nullptr;
    }
};
class LinkedList {
public:
    Node* head;
    LinkedList() { head = nullptr; }

    void insert(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data;
            if (temp->next != nullptr) cout << "->";
            temp = temp->next;
        }
        cout << "->NULL" << endl;
    }
};
Node* reverseLinkedListKGroup(Node* head, int k) {
    Node* currentNode = head;
    int totalNodes = 0;
    while (currentNode != nullptr && totalNodes < k) {
        currentNode = currentNode->next;
        totalNodes++;
    }
    if (totalNodes < k) return head;
    currentNode = head;
    Node* prevNode = nullptr;
    Node* nextNode = nullptr;
    int nodeCount = 0;
    while (nodeCount < k && currentNode != nullptr) {
        nextNode = currentNode->next;
        currentNode->next = prevNode;
        prevNode = currentNode;
        currentNode = nextNode;
        nodeCount++;
    }
    if (nextNode != nullptr)
        head->next = reverseLinkedListKGroup(nextNode, k);
    return prevNode;
}
int main() {
    LinkedList list;
    int n, k;
    cout << "Enter number of nodes: ";
    cin >> n;
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        list.insert(val);
    }
    cout << "Enter value of k: ";
    cin >> k;
    cout << "Original List: ";
    list.display();
    list.head = reverseLinkedListKGroup(list.head, k);
    cout << "Reversed in groups of " << k << ": ";
    list.display();
    return 0;
}
