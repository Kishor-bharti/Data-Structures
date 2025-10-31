// Remove all digits from a string

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "ab12cd3e4";
    string result = "";

    for (char c : s)
        if (!isdigit(c))
            result.push_back(c);

    cout << result; // "abcde"
}
