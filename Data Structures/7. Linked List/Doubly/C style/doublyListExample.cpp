#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

void insertAtHead(Node*& head, int val) {
    Node* newNode = new Node();
    newNode->data = val;
    newNode->prev = NULL;
    newNode->next = head;
    if (head != NULL)
        head->prev = newNode;
    head = newNode;
}

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
    while (temp->next)
        temp = temp->next;
    temp->next = newNode;
    newNode->prev = temp;
}

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

void printForward(Node* head) {
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
    printForward(head); // 10 20 30

    deleteNode(head, 20);
    printForward(head); // 10 30
}
