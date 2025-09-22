// Key: We didn’t implement stack manually. Just used STL stack.
#include<iostream>
#include<stack>
using namespace std;

bool isValid(string s) {
    stack<char> st;
    for(char c : s){
        if(c == '(' || c == '{' || c == '[')
            st.push(c);
        else {
            if(st.empty()) return false;
            if((c == ')' && st.top() != '(') ||
               (c == '}' && st.top() != '{') ||
               (c == ']' && st.top() != '['))
                return false;
            st.pop();
        }
    }
    return st.empty();
}
int main(){
    // string s = "([{abc{(6)}}])"; // need debugging!
    string s = ")";
    if(isValid(s)){
        cout<<"True";
    }
    else{
        cout<<"False!";
    }
    return 0;
}