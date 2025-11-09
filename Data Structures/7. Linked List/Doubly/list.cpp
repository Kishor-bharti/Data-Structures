/*
std::list<int> in C++ (often referred to as a doubly linked list) is a sequence container that allows non-contiguous memory allocation, unlike arrays or vectors which store elements in contiguous memory. It’s part of the C++ Standard Template Library (STL).

✅ What is a Linked List?

A linked list is a data structure where:
    - Each element (called a node) contains:
        - Data (e.g., an integer)
        - Pointer(s) to the next (and possibly previous) node

    - std::list in C++ is a doubly linked list, meaning each node points both forward and backward.

✅ Properties of std::list
    - Stores elements non-contiguously.
    - Insertion and deletion at any position is O(1) (if you have an iterator to that position).
    - Random access is not allowed (unlike vector), so you cannot do list[i].
    - Supports bidirectional iterators.
*/

#include <iostream>
#include <list>
using namespace std;

int main() {
    // ✅ Declaration
    list<int> myList;  // empty linked list

    // ✅ Important Methods of std::list<int>
    // Here are the commonly used ones:
/*
| **Method**         | **Description**                         |
| ------------------ | --------------------------------------- |
| `push_back(x)`     | Insert element `x` at the **end**       |
| `push_front(x)`    | Insert element `x` at the **beginning** |
| `pop_back()`       | Remove **last** element                 |
| `pop_front()`      | Remove **first** element                |
| `insert(it, x)`    | Insert `x` **before iterator `it`**     |
| `erase(it)`        | Remove element at position `it`         |
| `remove(x)`        | Remove **all occurrences** of `x`       |
| `clear()`          | Remove all elements                     |
| `size()`           | Number of elements                      |
| `empty()`          | Check if list is empty                  |
| `front()`          | Access **first element**                |
| `back()`           | Access **last element**                 |
| `sort()`           | Sort elements in ascending order        |
| `reverse()`        | Reverse the list                        |
| `merge(otherList)` | Merge two sorted lists                  |
| `unique()`         | Remove **consecutive duplicates**       |
*/


    return 0;
}
