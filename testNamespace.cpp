#include <iostream>
#include <typeinfo>
#include <vector>
using namespace std;

namespace myNamespace {
    class vector {
    public:
        void display() {
            cout << "This is myNamespace::vector" << endl;
        }
    };
}

int main() {
    // Without using both namespaces, no conflict:
    myNamespace::vector v1;
    v1.display();

    std::vector<int> v2 = {1, 2, 3};
    for (int i : v2) cout << i << " ";
    cout << endl;

    // Uncommenting this will cause a naming conflict:
    // using namespace myNamespace;
    // using namespace std;
    // vector<int> v; // ❌ Ambiguous: which vector?

    float f1 = 2.5f;
    cout<<f1;

    auto num = 24;
    cout<<typeid(num).name();

    return 0;
}
