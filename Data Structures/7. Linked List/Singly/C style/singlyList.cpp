// 🧩 Singly Linked List in C++ (C-Style)
// A Singly Linked List is a chain of nodes, where each node contains data and a pointer to the next node.
// [10 | *] → [20 | *] → [30 | NULL]

#include <iostream>
using namespace std;

// ✅ Node Structure
struct Node {
    int data;
    Node* next;
};

// ✅ Creating Nodes Manually
int main() {
    Node* head = new Node();   // create first node
    Node* second = new Node();
    Node* third = new Node();

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    // Traversal
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}

// Output: 10 20 30

// ✅ Insert at the Beginning
void insertAtHead(Node*& head, int val) {
    Node* newNode = new Node();
    newNode->data = val;
    newNode->next = head;
    head = newNode;
}

// ✅ Insert at the End
void insertAtTail(Node*& head, int val) {
    Node* newNode = new Node();
    newNode->data = val;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
}

// ✅ Delete a Node
void deleteNode(Node*& head, int key) {
    Node* temp = head;
    Node* prev = NULL;

    if (temp != NULL && temp->data == key) {
        head = temp->next;
        delete temp;
        return;
    }

    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) return; // not found

    prev->next = temp->next;
    delete temp;
}

// ✅ Display List
void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

