// find the greatest multiple of a number n in an array using stack stl
#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int findGreatest(vector<int> &arr, int n){
    stack<int> s;
    for(int i:arr){
        if(i%n == 0){
            if(s.empty() || i>s.top())
                s.push(i);
        }
    }
    if(s.empty()) return -1;
    return s.top();

}


int main(){
    vector<int> arr = {4,20,16, 15, 44, 86, 123, 12}; // answser 44
    cout<<findGreatest(arr, 4);

    return 0;
}