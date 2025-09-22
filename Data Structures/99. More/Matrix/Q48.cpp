#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<vector<int>>& matrix) {
        // First transpose
        for(int i=0; i<matrix.size(); ++i){
            for(int j=i+1; j<matrix[0].size(); ++j){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
}


int main(){
    vector<vector<int>> matrix = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    rotate(matrix);
    for(auto n: matrix){
        for(int num: n){
            cout<<num<<" ";
        }
        cout<<endl;
    }
    //testing swap()
    // int a = 4, b = 3; 
    // swap(a,b);
    // cout<<"a = "<<a<<"b = "<<b<<endl;
    // swap() is working fine!
}
