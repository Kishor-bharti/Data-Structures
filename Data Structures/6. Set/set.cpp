/*
    set in C++ STL:
        A set is an ordered collection of unique elements in C++. It stores elements in sorted order (by default, ascending) and does not allow duplicates.
    
    Key Properties:
        - Implemented as balanced binary search tree (typically Red-Black Tree).
        - Order maintained (ascending by default).
        - No duplicate elements allowed.
        - Search, insertion, and deletion operations take O(log n) time.
*/
#include<iostream>
#include<set>
using namespace std;

int main(){
    // Declaration (find more ways..)
    set<int> s; // creates an empty set of integers
    
    s.insert(10);
    s.insert(5);
    s.insert(20);
    s.insert(10); // duplicate ignored

    cout << "Set elements: ";
    for (int x : s) cout << x << " "; // Output: 5 10 20

    if (s.find(10) != s.end())
        cout << "\n10 is present";
    else
        cout << "\n10 is not present";

    s.erase(5);
    cout << "\nAfter erasing 5: ";
    for (int x : s) cout << x << " "; // Output: 10 20

    // we cannot iterate it with indexing!
    // ordered only means the elements are in sorted order here!

    // Operations
/*
    1. insert(x) // Inserts element x in the set.
    2. erase(x) // Removes element x from the set.
    3. find(x)  // Returns iterator to x if found, else s.end().
    4. count(x) // Returns 1 if x is present, else 0.
    5. size() // Returns number of elements.
    6. empty() // Checks if set is empty.
    7. clear() // Removes all elements.
    8. lower_bound(x) // Returns iterator to first element >= x.
    9. upper_bound(x) // Returns iterator to first element > x.
*/ 

    // Real-world Use Case
/*
         Maintain sorted unique data like:
             - Storing unique user IDs in ascending order.
             - Keeping track of unique scores in a leaderboard.
             - Removing duplicates while maintaining sorted order.
*/
}