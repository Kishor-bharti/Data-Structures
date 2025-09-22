// Read chat: [Modifying stack elements]

#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> s;

    s.push(3);
    s.push(0);
    s.push(1);

    // we cannot iterate stacks as vectors (or lists) like this: 
    // for(int i: s){
    //     cout<<i<<" "<<endl;
    // }
    // because, it does not provide iterators like begin(), end(), required for this kind of loops!

    // let's see if we can modify any element at random!

    s.top() = 4; // yes!! we can edit/modify an element in stack but it must be the first element! else, how are you going to access any element at random without pop()??
    cout<<s.top()<<endl;

    return 0;
}