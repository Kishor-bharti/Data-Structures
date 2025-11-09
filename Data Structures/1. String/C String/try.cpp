// WHY C STRING IS IMPORTANT!!!!!
#include<iostream>
#include<cstring>
using namespace std;

int func1(char ch[]){
    int size = strlen(ch);
    return size;
}

int main(){
    char ch[] = "hello world!";

    int res = func1(ch);
    cout<<res;
}