// ✅ Returning multiple values from function

#include<iostream>
#include<tuple>

using namespace std;

tuple<int,int,int> getStats(int arr[], int n) {
    int mn = arr[0], mx = arr[0], sum = 0;
    for(int i=0;i<n;i++){
        mn = min(mn, arr[i]);
        mx = max(mx, arr[i]);
        sum += arr[i];
    }
    return make_tuple(mn, mx, sum);
}

int main() {
    int arr[5] = {3,5,7,2,8};
    auto [mn, mx, sum] = getStats(arr, 5);
    cout << mn << " " << mx << " " << sum;
}

/*
✅ Clear
✅ Clean
✅ Modern C++
*/