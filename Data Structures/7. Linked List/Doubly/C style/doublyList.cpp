// 🧩 Doubly Linked List in C++ (C-Style)
// Each node now has two pointers:
// [NULL | 10 | *] ↔ [* | 20 | *] ↔ [* | 30 | NULL]

#include <iostream>
using namespace std;

// ✅ Node Structure
struct Node {
    int data;
    Node* prev;
    Node* next;
};

// ✅ Insertion at Head
void insertAtHead(Node*& head, int val) {
    Node* newNode = new Node();
    newNode->data = val;
    newNode->prev = NULL;
    newNode->next = head;
    if (head != NULL)
        head->prev = newNode;
    head = newNode;
}


// ✅ Insertion at Tail
void insertAtTail(Node*& head, int val) {
    Node* newNode = new Node();
    newNode->data = val;
    newNode->next = NULL;

    if (head == NULL) {
        newNode->prev = NULL;
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
    newNode->prev = temp;
}

// ✅ Deletion
void deleteNode(Node*& head, int key) {
    Node* temp = head;
    while (temp && temp->data != key)
        temp = temp->next;
    if (!temp) return;

    if (temp->prev)
        temp->prev->next = temp->next;
    else
        head = temp->next;

    if (temp->next)
        temp->next->prev = temp->prev;

    delete temp;
}

// ✅ Traversal
void printForward(Node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// CHECK doublyListExample.cpp!

// ⚙️ Difference Between Singly and Doubly Linked List
/*
| Feature                  | Singly LL    | Doubly LL          |
| ------------------------ | ------------ | ------------------ |
| Direction                | One-way      | Both directions    |
| Extra pointer            | No           | Yes (`prev`)       |
| Memory use               | Less         | More               |
| Traversal                | Forward only | Forward & backward |
| Reverse traversal        | ❌            | ✅                  |
| Insertion/Deletion (mid) | Slower       | Easier             |
*/