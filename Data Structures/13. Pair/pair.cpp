// Required import/header
#include<iostream>
#include <utility>
#include <vector>
#include <map>
using namespace std;

/*
* A pair is a simple container from <utility> that stores exactly two values, possibly of different types.
* You can think of it as a tiny struct:
        pair = { value1, value2 }
                 ^first  ^second
*/

int main(){
    // ✅ Declaration & Initialization
    pair<int, string> p1;        // uninitialized
    pair<int, string> p2(1, "Apple");
    pair<int, string> p3 = {2, "Banana"};
    auto p4 = make_pair(3, "Cherry"); // type inferred

    // ✅ Access Elements
    cout << p2.first << endl;   // 1
    cout << p2.second << endl;  // Apple

    // ✅ Assign / Modify Values
    p1.first = 10;
    p1.second = "Orange";

    // ✅ Taking Input in a Pair
    pair<int, string> p;
    cin >> p.first >> p.second;

    // ✅ Pair Comparison (Lexicographical)
    // Compares .first first, if equal then .second

    pair<int,int> a = {2, 3};
    pair<int,int> b = {2, 5};
    cout << (a < b); // true (3 < 5)

    // ✅ Using pair in a Vector (MOST common in CP)
    vector<pair<int,int>> points = {{1,2}, {3,4}, {5,6}};

    for(auto p : points) 
        cout << p.first << "," << p.second << endl;


    // ✅ Using pair in map
    // A map is a collection of pairs internally:
    map<int, string> mp;
    mp[21] = "Kishor";
    mp[30] = "Sir";

    for(auto it : mp){
        cout << it.first << " -> " << it.second << endl;
    }

    // ✅ Nested Pairs
    // Useful for storing extra info:
    pair<int, pair<string, double>> student;

    student = {101, {"Kishor", 9.2}};
    cout << student.first << " "
         << student.second.first << " "
         << student.second.second;

    // CHECK pairExample.cpp!

    // ✅ Unpacking using tie() (C++11+)
    pair<int,string> p = {7, "Hello"};
    int x; string y;
    tie(x,y) = p;
    cout << x << " " << y; // 7 Hello

// ✅ Summary Table

/*
| Feature                       | Notes               |
| ----------------------------- | ------------------- |
| Stores two values             | `.first`, `.second` |
| Values can be different types | ✅                   |
| Supports comparison           | Lexicographical     |
| Used in map, graph, sorting   | Very common         |
| tuple if more than 2 items    | ✅                   |
*/

// 🚀 Where is pair used in LeetCode?

/*
    - Graph edges → {node, weight}
    - Priority queue items → {priority, value}
    - Coordinates → {row, col}
    - Returning multiple values from functions
*/

}