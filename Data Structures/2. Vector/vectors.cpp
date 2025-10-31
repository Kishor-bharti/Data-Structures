// Definition:
// In C++, vectors are dynamic arrays provided by the Standard Template Library (STL).
// They behave like arrays but with a key difference: vectors can grow or shrink in size automatically as elements are added or removed.

// Why Use Vectors?
// Automatically manage memory.
// Built-in functions for insertion, deletion, access, etc.
// Safer and more flexible than raw arrays.

#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main()
{
    // Declaration & Initialization:
    vector<int> a, v;             // Empty vector
    vector<int> b(5);             // Vector of size 5 with default values (0)
    vector<int> c(5, 100);        // Vector of size 5, all elements = 100
    vector<int> d = {10, 20, 30}; // Vector with 3 elements

    // 2D vector
    vector<vector<int>> matrix(3, vector<int>(4, 0)); // 3x4 matrix filled with 0

    // Behind the Scenes

    // Internally, vectors use a dynamic array.
    // If the capacity is full, they allocate a larger array and copy elements.
    // This makes push_back() amortized O(1).

    // methods:
    auto x = 5;
    v.push_back(x); //  Adds x at the end
    v.pop_back();   // Removes last element
    v.size();       // Returns number of elements
    // v[i] or v.at(i)
    v.clear(); // Empties the vector
    v.empty(); // Returns true if empty
    v.begin();
    v.end();

    int i = 2, j = 3;

    // Ensure there are enough rows
    if (matrix.size() <= i)
        matrix.resize(i + 1);

    // Ensure the i-th row has enough columns
    if (matrix[i].size() <= j)
        matrix[i].resize(j + 1);

    // Now it's safe to insert
    matrix[i][j] = 99;

    v.erase(v.begin() + i); // to remove the i-th element from a vector
    sort(v.begin(), v.end());

    cout<<matrix[0].size()<<" "<<matrix.size()<<endl;


    // To find the maximum or minimum element in a vector
    int max = *max_element(d.begin(),d.end()); //need algorithm module
    int min = *min_element(d.begin(),d.end());
    cout<<"Max of d "<<max<<"Min of d "<<min<<endl;

    return 0;
}