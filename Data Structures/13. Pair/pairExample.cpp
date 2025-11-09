// ✅ Returning 2 values from a function
#include<iostream>
#include <utility>
using namespace std;


pair<int, int> getMinMax(int arr[], int n) {
    int mn = arr[0], mx = arr[0];
    for(int i=0;i<n;i++){
        mn = min(mn, arr[i]);
        mx = max(mx, arr[i]);
    }
    return {mn, mx};
}

int main() {
    int arr[] = {2,8,4,6};
    auto p = getMinMax(arr, 4);
    cout << "Min: " << p.first << ", Max: " << p.second;
}