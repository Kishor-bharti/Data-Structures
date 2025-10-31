#include <bits/stdc++.h>
// #include<iostream>
// #include<vector>
// #include <windows.h>
using namespace std;
int main(){
    // vector<std::variant<int, string, float, char, bool>> arr = {1,"A",6.7f,'f',true};
    // vector<variant<int, string, double>> s;
    // SetConsoleOutputCP(CP_UTF8);
    // std::string s = "Hello 😄";
    // std::cout << "String: " << s << std::endl;

    vector<int> d={1,2,3,4,5,6,6,53,63,7,25,46,3,654,654,23,574,6};

    // To find the maximum or minimum element in a vector
    int max = *max_element(d.begin(),d.end());
    int min = *min_element(d.begin(),d.end());
    cout<<"Max of d: "<<max<<"\nMin of d: "<<min<<endl;
}