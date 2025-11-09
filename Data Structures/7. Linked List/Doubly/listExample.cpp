#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> lst = {10, 20, 30};

    lst.push_back(40);   // 10 20 30 40
    lst.push_front(5);   // 5 10 20 30 40

    cout << "Front: " << lst.front() << endl; // 5
    cout << "Back: " << lst.back() << endl;   // 40

    lst.pop_front();  // remove 5
    lst.pop_back();   // remove 40

    lst.sort();
    lst.reverse();

    cout << "List after sort & reverse: ";
    for (int x : lst) cout << x << " ";

    return 0;
}