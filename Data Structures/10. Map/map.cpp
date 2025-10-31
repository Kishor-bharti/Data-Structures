// Required import/header
#include<iostream>
#include <map>
using namespace std;

/*
A map is a built-in STL (Standard Template Library) container that stores key–value pairs, where:
    - Each key is unique
    - Elements are automatically sorted by keys (in ascending order by default)
    - It’s implemented using a balanced binary search tree (Red-Black Tree)

This makes insertion, deletion, and searching operations O(log n).
*/

// The main difference between map and unordered_map is that map is sorted!

int main() {
    // Declaration
    map<int, string> mp;  // key = int, value = string

    // Inserting elements
    mp[1] = "Apple";                  // Method 1: using []
    mp.insert({2, "Banana"});         // Method 2: using insert()
    mp.emplace(3, "Cherry");          // Method 3: using emplace() (faster)

    // Access Elements
    cout << mp[1] << endl;  // Output: Apple

    // IMPORTANT ❗❗❗❗❗❗❗❗
    // If key doesn’t exist, map[key] automatically creates a new key with a default value (0, "", etc.)


    // Iterate Through Map
    for (auto it : mp) {
    cout << it.first << " -> " << it.second << endl;
    }

    /*
    OUTPUT:
        1 -> Apple
        2 -> Banana
        3 -> Cherry
    */

    // Check if a Key Exists
    if (mp.find(2) != mp.end())
        cout << "Key 2 exists!";
    else
        cout << "Key 2 not found!";

    // Erase / Clear Elements
    mp.erase(2);     // removes key 2
    mp.clear();      // removes all elements

    // Operations
/*
    1. mp.size() // Returns number of elements
    2. mp.empty() // Checks if map is empty
    3. mp.count(key) // Returns 1 if key exists, 0 otherwise
    4. mp.begin() // Returns iterator to start 
    5. mp.end() // Returns iterator to end
    6. mp.rbegin() or mp.rend() // Reverse iteration
*/

// Time Complexity
/*
| Operation | Complexity | Reason                |
| --------- | ---------- | --------------------- |
| Insert    | O(log n)   | Red-Black Tree        |
| Erase     | O(log n)   | Tree rebalancing      |
| Search    | O(log n)   | Binary search in tree |
| Traverse  | O(n)       | Visit all nodes       |
*/

// Real-World Uses
/*
    - Counting frequency of elements (map<int,int>)
    - Mapping IDs → Names (map<int,string>)
    - Adjacency lists for graphs
    - Sorted dictionaries
*/
}