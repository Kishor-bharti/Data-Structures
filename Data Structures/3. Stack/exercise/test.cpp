#include<iostream>

int ref(int &x){ // pass by value and pass by reference! tryna remove & and run this code!
    x++;
    return x;
}

int main(){
    int x = 5;
    std::cout<<x<<std::endl;
    std::cout<<ref(x)<<std::endl;
    std::cout<<x<<std::endl;

    return 0;
}