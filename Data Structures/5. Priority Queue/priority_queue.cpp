/*
    What is std::priority_queue?    
       - It’s a max-heap by default in C++, meaning the largest element is always at the top. Internally, it uses a heap structure built on top of a vector.
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    // Max-Heap (default)
    priority_queue<int> pq;

    pq.push(10);
    pq.push(5);
    pq.push(20);

    cout << pq.top() << endl; // Output: 20 (largest element)

    pq.pop(); // Removes 20
    cout << pq.top() << endl; // Output: 10

    // Operations
/*
    1. pq.push(x)
    2. pq.top()
    3. pq.pop()
    4. pq.empty()
    5. pq.size() (find more..)
*/

    // Min-Heap version
/*       C++ priority_queue is max-heap by default.
         To make min-heap, use:
*/         
    priority_queue<int, vector<int>, greater<int>> minHeap;

    // Common Use Cases
/*
        ✔ Dijkstra’s Algorithm (Shortest Path)
        ✔ Huffman Coding
        ✔ Job Scheduling
        ✔ Anytime you need largest or smallest element quickly
*/    
    // a real-world example:
        // finding the K largest elements
}