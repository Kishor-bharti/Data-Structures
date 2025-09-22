//validParentheses problem
//it will be fun to debug this!!!!
#include<iostream>
#include<stack>

bool isValid(std::string s){
    std::stack<char> s1;
    for(char c:s){
        if(c=='(' || c=='{' || c=='[')
            s1.push(c);
        else{
            if(s1.empty()) return false;
            if((c==')' && s1.top() !='(') || 
              ((c=='}') && s1.top() !='{') || 
              ((c==']') && s1.top() !='['))
                return false;
            s1.pop();
            
        }
    }
    return s1.empty();
}


int main(){
    std::string s = "}";
    bool check = isValid(s);
    check ? std::cout<<"True":std::cout<<"False";

    return 0;
}