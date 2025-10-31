// Required import/header
#include <iostream>
#include <string>
using namespace std;

/*
A string in C++ (from <string>) is actually a class — not a simple array of characters like in C.
It allows dynamic size, easy manipulation, and powerful methods.
*/

int main() {
    // Declaration and assignment
    string s1 = "Hello";
    string s2("World");
    string s3 = s1 + " " + s2; // concatenation
    cout << s3; // Hello World


    // 🔹 Common String Methods

/*
    1. s.size() or s.length() // returns length // "hello".size() → 5
    2. s.empty() // checks if string is empty // "".empty() → true
    3. s.push_back(c) // add char to end  // "abc" → "abcx"
    4. s.pop_back() // remove last char // "hello" → "hell"
    5. s.substr(pos, len) // substring  // "abcdef".substr(2,3) → "cde"
    6. s.find(sub) // find substring index // "abcde".find("cd") → 2
    7. s.rfind(sub) // last occurrence  // "ababa".rfind("ba") → 3
    8. s.erase(pos, len) // erase part  // "abcdef".erase(2,2) → "abef"
    9. s.insert(pos, str) // insert substring  //"abcd".insert(2,"XYZ") → "abXYZcd"
    10. s.replace(pos, len, str) // replace part  // "abcd".replace(1,2,"XYZ") → "aXYZd"
    11. stoi(str) / stol() / stof() // convert to number // "123" → 123
    12. to_string(num) // number to string // 123 → "123
    13. reverse(s.begin(), s.end()) // reverse string  // "abc" → "cba"
*/

    // Check examples in this dir!

    // 🔹 String Iteration Styles
    string s = "hello";

    for (int i = 0; i < s.size(); i++)
        cout << s[i];   // index-based

    for (char c : s)
        cout << c;      // range-based

    // 🔹 String Comparison
    string a = "apple", b = "banana";
    cout << (a == b);   // false
    cout << (a < b);    // true (lexicographically)

    // 🧠 Pro Tip (LeetCode use)
/*
    - reverse, sort, find, and substr are used a lot.
    - Problems like:
        - “Longest Palindrome Substring”
        - “Reverse Words in a String”
        - “Valid Anagram”
        - “String Compression”
*/

}