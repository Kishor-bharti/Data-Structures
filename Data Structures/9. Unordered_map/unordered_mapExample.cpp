#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<string, int> freq;

    // Counting frequency of words
    freq["apple"]++;
    freq["banana"]++;
    freq["apple"]++;
    freq["cherry"]++;

    cout << "Word Frequencies:\n";
    for (auto it : freq) {
        cout << it.first << " -> " << it.second << endl;
    }

    if (freq.find("banana") != freq.end())
        cout << "\nBanana count: " << freq["banana"] << endl;

    freq.erase("banana");

    cout << "\nAfter erasing banana:\n";
    for (auto it : freq) {
        cout << it.first << " -> " << it.second << endl;
    }

    return 0;
}