// Required import/header
#include<iostream>
#include <unordered_map>
using namespace std;

/*
An unordered_map is also a key–value container from the STL, but unlike map:
| Feature             | `map`                         | `unordered_map`                    |
| ------------------- | ----------------------------- | ---------------------------------- |
| **Order**           | Sorted (by key)               | Unsorted (random order)            |
| **Implementation**  | Balanced BST (Red-Black Tree) | Hash Table                         |
| **Time Complexity** | O(log n)                      | **O(1)** average (O(n) worst case) |
| **Duplicates**      | Not allowed                   | Not allowed                        |

So, unordered_map is all about speed over ordering.
*/

int main() {
    // Declaration
    unordered_map<int, string> umap;

    // Insert Elements
    umap[1] = "Apple";                 // Using []
    umap.insert({2, "Banana"});        // Using insert()
    umap.emplace(3, "Cherry");         // Using emplace()

    // Access Elements
    cout << umap[1] << endl;  // Output: Apple
    // If you access a key that doesn’t exist, it gets created automatically with a default value.

    // Iterate Through an Unordered Map
    // ⚠️ Order is not guaranteed — it can appear in any sequence.
    for (auto it : umap) {
    cout << it.first << " -> " << it.second << endl;
    }

    // Check for a Key
    if (umap.find(2) != umap.end())
        cout << "Key 2 found!" << endl;
    else
        cout << "Key 2 not found!" << endl;


    // Erase and Clear
    umap.erase(2);  // removes key 2
    umap.clear();   // removes all


    // Useful Functions
/*
    1. umap.size() // Number of elements
    2. umap.empty()	// True if empty
    3. umap.find(key) // Iterator to element
    4. umap.count(key) // 1 if exists, else 0
    5. umap.bucket_count() // Number of hash buckets
    6. umap.load_factor() // Avg. elements per bucket
*/

// Time Complexity
/*
| Operation | Average  | Worst Case |
| --------- | -------- | ---------- |
| Insert    | **O(1)** | O(n)       |
| Search    | **O(1)** | O(n)       |
| Erase     | **O(1)** | O(n)       |
// The worst case happens rarely — only when all elements hash to the same bucket (poor hash distribution).
*/

// Real-World Use Cases
/*
    - Counting frequency (most common use)
    - Caching (like memoization in DP)
    - Checking existence of elements (like seen/visited)
    - Hash maps in algorithms (e.g., Two Sum, Subarray Sum problems)

*/
}