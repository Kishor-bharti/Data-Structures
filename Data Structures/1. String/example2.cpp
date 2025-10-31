// Count frequency of characters

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "aabbccddaa";
    unordered_map<char, int> freq;

    for (char c : s)
        freq[c]++;

    for (auto [ch, count] : freq)
        cout << ch << " -> " << count << endl;
}
