// Check if a string is palindrome

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
    string rev = s;
    reverse(rev.begin(), rev.end());
    return s == rev;
}

int main() {
    cout << isPalindrome("level");  // 1 (true)
}