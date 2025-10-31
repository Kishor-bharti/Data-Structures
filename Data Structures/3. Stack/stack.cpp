#include<iostream>
#include<stack>
using namespace std;

int main(){ 

    stack<int> s;          // stack of integers
    stack<string> s2;      // stack of strings

    // Common Operations (all of these has a time complexity of O(1))
    auto x = 5;
    s.push(x); // Add element to top
    s.pop(); // Remove top element
    s.top(); // Access top element
    s.empty(); // returns true if stack is empty
    s.size(); // Number of elements
 
    return 0;
}