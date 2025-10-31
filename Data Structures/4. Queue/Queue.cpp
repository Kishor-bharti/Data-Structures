#include<iostream>
#include<queue>
using namespace std;

int main(){
    // Declaration
    queue<int> q;

    // Adding elements
    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front: " << q.front() << endl;  // 10
    cout << "Back: " << q.back() << endl;    // 30
    cout << "Size: " << q.size() << endl;    // 3

    q.pop(); // Remove 10
    cout << "After pop, Front: " << q.front() << endl; // 20

    if (q.empty())
        cout << "Queue is empty" << endl;
    else
        cout << "Queue is not empty" << endl;


    // Types of Queues in C++ STL
    // 1. Normal Queue → queue<T>
    // 2. Deque (Double-ended queue) → deque<T>
    // 3. Priority Queue (Max-Heap by default) → priority_queue<T>
    // 4. Circular Queue (manual implementation, not STL)
    // 5. Queue using Linked List (manual implementation)

    int x =  5;
    // Methods:

    q.push(x); //insert element
    q.front(); //element at first
    q.back(); //element at last
    q.size(); //size
    q.pop(); //pop last element
    q.empty(); // checks if queue is empty


    return 0;
}