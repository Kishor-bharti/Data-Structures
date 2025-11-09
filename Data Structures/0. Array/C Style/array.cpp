// 🧩 C-Style Arrays in C++ (Classic Arrays)

// ✅ What is an Array?

/*
An array is a collection of elements (all of the same type) stored in contiguous memory locations.
Each element can be accessed directly using an index (starting from 0).
Example:
    int arr[5] = {10, 20, 30, 40, 50};
      ↑
    index 0 → value 10
*/

#include<iostream>
#include<array>
// #include<cstring>
using namespace std;

int main(){
    // ⚙️ Declaration and Initialization
    // ✅ 1. Fixed size
    int marks[5];  // creates array of 5 integers (uninitialized)

    // ⚠️ Uninitialized elements have garbage values (whatever is in memory).

    // ✅ 2. Initialize with values
    int marks[5] = {10, 20, 30, 40, 50};

    // - Index starts from 0 → marks[0] = 10

    // ✅ 3. Partial initialization
    int arr[5] = {1, 2};   // remaining filled with 0 → {1,2,0,0,0}

    // ✅ 4. Implicit size
    int arr[] = {10, 20, 30}; // size automatically = 3

    // ✅ 5. Character arrays
    char name[7] = "Kishor";  // '\0' (null character) auto added at end
    cout << name;             // prints Kishor

    // 🔹 Access and Update Elements
    int arr[4] = {5, 10, 15, 20};
    cout << arr[0];  // 5
    arr[1] = 50;     // update value
    cout << arr[1];  // 50

    // 🔹 Traversing an Array
    int arr[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    // 🧠 Using sizeof() to find array size
    int arr[] = {10, 20, 30, 40, 50};
    int totalSize = sizeof(arr);       // bytes (20)
    int elementSize = sizeof(arr[0]);  // bytes (4)
    int n = totalSize / elementSize;   // number of elements (5)

    cout << "Size: " << n;

    // ⚙️ Passing Arrays to Functions
    /*
        When you pass an array to a function, only the pointer (address of first element) is passed — not the entire array!
    */

    /*
    void printArray(int arr[], int size) {
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
    }

    int main() {
        int nums[] = {10, 20, 30, 40, 50};
        int n = sizeof(nums)/sizeof(nums[0]);
        printArray(nums, n);
    }
    */

    // ⚠️ Pitfall: Size info lost in functions
    // Inside the function, arr becomes a pointer:
    
    // void func(int arr[]) {
        // cout << sizeof(arr);  // gives 8 (pointer size), NOT actual array size
    // }
    // So always pass size separately.

    // 🔹 Modifying inside function
    // Changes done inside a function affect the original array because of pass by reference (pointer):

    /*
    void modify(int arr[], int size) {
        arr[0] = 999;
    }

    int main() {
        int a[] = {1, 2, 3};
        modify(a, 3);
        cout << a[0];  // 999
    }

    */

    // 🔹 Multi-dimensional Arrays
    int mat[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    cout << mat[1][2]; // 6

    // Loop through:
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << mat[i][j] << " ";
        }
    }


    // 🧠 Pointer & Array Relationship
    // An array name acts as a pointer to its first element:
    int arr[3] = {10, 20, 30};
    cout << arr;     // prints address
    cout << *arr;    // prints 10
    cout << *(arr+2); // prints 30
    // This concept is super useful in pointer-based questions.

    // 💡 Common Placement/LeetCode-style Operations
/*
        1. Reverse an array
            int arr[] = {1, 2, 3, 4, 5};
            int n = sizeof(arr)/sizeof(arr[0]);
            for (int i = 0, j = n-1; i < j; i++, j--)
                swap(arr[i], arr[j]);
        
        2. Find max/min
            int maxVal = arr[0];
            for (int i = 1; i < n; i++)
                if (arr[i] > maxVal)
                    maxVal = arr[i];

        3. Sum of all elements
            int sum = 0;
                for (int i = 0; i < n; i++)
                    sum += arr[i];

🧩 Summary
| Feature               | Description                   |
| --------------------- | ----------------------------- |
| Fixed size            | Must be known at compile time |
| Zero-based index      | Always starts from 0          |
| Stored contiguously   | In continuous memory          |
| Fast access           | `O(1)` random access          |
| No in-built functions | Must write loops manually     |
| Decays to pointer     | When passed to functions      |
*/

}

