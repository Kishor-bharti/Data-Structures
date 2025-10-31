#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> marks;

    // Insert data
    marks["Kishor"] = 90;
    marks["Riya"] = 85;
    marks["Aman"] = 78;

    // Display
    cout << "Student Marks:\n";
    for (auto it : marks)
        cout << it.first << " -> " << it.second << endl;

    // Find
    if (marks.find("Kishor") != marks.end())
        cout << "\nKishor's marks: " << marks["Kishor"] << endl;

    // Erase
    marks.erase("Riya");
    cout << "\nAfter erasing Riya:\n";
    for (auto it : marks)
        cout << it.first << " -> " << it.second << endl;
}