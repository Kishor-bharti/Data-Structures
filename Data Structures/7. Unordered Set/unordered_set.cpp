// Required import/header
#include<iostream>
#include <unordered_set>
using namespace std;

/*
    unordered_set in C++ STL:
       An unordered_set is an unordered collection of unique elements.
          - Implemented using a hash table.
          - No duplicates allowed, but order is not maintained.
          - Most operations have average O(1) time complexity, unlike set which is O(log n).
*/

int main(){
    // Declaration
    unordered_set<int> us; // empty unordered_set of integers

    us.insert(10);
    us.insert(5);
    us.insert(20);
    us.insert(10); // duplicate ignored

    cout << "Unordered set elements: ";
    for (int x : us) cout << x << " "; // Order may vary, e.g., 20 5 10

    if (us.find(5) != us.end())
        cout << "\n5 is present";
    else
        cout << "\n5 is not present";

    us.erase(10);
    cout << "\nAfter erasing 10: ";
    for (int x : us) cout << x << " ";

    // Operations
/*
    1. insert(x) // Insert element x.
    2. erase(x) // Remove element x.
    3. find(x) // Returns iterator to x if found, else us.end().
    4. count(x) // Returns 1 if x is present, else 0.
    5. size() // Number of elements.
    6. empty() // Check if set is empty.
    7. clear() // Remove all elements.
*/

    // Read: Key Differences Between set and unordered_set (in chat: C++ heap methods)

    // Real-world Use Cases
/*
        - Fast lookups: Checking if an item exists in a collection.
        - Removing duplicates quickly.
        - Counting unique elements in a large dataset.
*/
}