// Required import/header
#include<iostream>
#include <tuple>
#include <vector>
using namespace std;

/*
* A tuple is like a pair, but it can store more than 2 values — of different types.
* Example: tuple<int, string, double> → {101, "Kishor", 9.5}
* Defined in <tuple> (C++11 and above)
*/

int main(){
    // Declaration
    tuple<int, string, double> t1(1, "Apple", 99.5);
    tuple<int, string, double> t2 = make_tuple(2, "Banana", 49.9);

    // ✅ Accessing Values using get<index>()
    cout << get<0>(t1) << endl; // 1
    cout << get<1>(t1) << endl; // Apple
    cout << get<2>(t1) << endl; // 99.5

    // ⚠️ Index must be a compile-time constant (like template parameter).

    // ✅ Modifying Elements
    get<1>(t1) = "Orange";

    // ✅ Unpacking a Tuple using tie()
    tuple<int, string, double> t = make_tuple(10, "Kishor", 8.7);

    int roll;
    string name;
    double cgpa;

    tie(roll, name, cgpa) = t;

    cout << roll << " " << name << " " << cgpa;

    // ✅ Ignore specific values
    tie(roll, ignore, cgpa) = t;

    // ✅ Compare Tuples
    // Comparison is lexicographical (similar to pair):
    tuple<int,int,int> a(1,2,3);
    tuple<int,int,int> b(1,2,4);

    cout << (a < b); // true

    // ✅ Tuple Size
    cout << tuple_size<decltype(t1)>::value << endl; // 3

    // ✅ Tuple in a Vector (very common use)
    vector<tuple<int, int, int>> edges;
    edges.push_back({1, 2, 10}); // u, v, weight
    // Graph algorithms LOVE this structure ❤️

/*
    ✅ Real Example: Student Data    

    tuple<int,string,double> student = make_tuple(101, "Kishor", 9.1);

    cout << "Roll: " << get<0>(student) << endl;
    cout << "Name: " << get<1>(student) << endl;
    cout << "CGPA: " << get<2>(student) << endl;

*/

// CHECK tupleExample.cpp!

// ✅ When to Use Pair vs Tuple
/*
| Feature            | `pair`             | `tuple`                 |
| ------------------ | ------------------ | ----------------------- |
| Number of elements | 2                  | 2 or more               |
| Readability        | Easy to understand | Harder without naming   |
| Use cases          | Maps, coordinates  | Complex structured data |
*/

// ✅ Placement Tip
// If more than 2 elements → prefer struct/class in real projects
// But for coding tests / CP → tuple is super useful

}