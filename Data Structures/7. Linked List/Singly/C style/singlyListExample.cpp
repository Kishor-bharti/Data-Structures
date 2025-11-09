#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertAtHead(Node*& head, int val) {
    Node* newNode = new Node();
    newNode->data = val;
    newNode->next = head;
    head = newNode;
}

void insertAtTail(Node*& head, int val) {
    Node* newNode = new Node();
    newNode->data = val;
    newNode->next = NULL;

    if (!head) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next) temp = temp->next;
    temp->next = newNode;
}

void deleteNode(Node*& head, int key) {
    Node* temp = head;
    Node* prev = NULL;
    if (temp && temp->data == key) {
        head = temp->next;
        delete temp;
        return;
    }
    while (temp && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }
    if (!temp) return;
    prev->next = temp->next;
    delete temp;
}

void printList(Node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;

    insertAtHead(head, 10);
    insertAtTail(head, 20);
    insertAtTail(head, 30);
    insertAtTail(head, 40);
    printList(head);  // 10 20 30 40

    deleteNode(head, 20);
    printList(head);  // 10 30 40
}
