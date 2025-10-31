// Required imports
#include<iostream>
#include<queue>
using namespace std;
int main(){
    //Declaration
    deque<int> dq,dq1; // Find out more ways

    //In action:
    dq.push_back(5);
    cout<<"Front: "<<dq.front()<<" ";
    dq.push_front(6);
    cout<<"Front: "<<dq.front()<<" Back: "<<dq.back()<<endl;

    // adding more elements..
    dq.push_back(4);
    dq.push_back(3);
    dq.push_back(2);
    dq.push_back(1);

    // Let's tryna iterate!
    for(int n:dq){
        cout<<n<<" ";
    } // successful ✅
    cout<<"Front: "<<dq.front()<<" Back: "<<dq.back()<<endl;

    dq.pop_back();
    cout<<"After dq.pop_back():"<<endl;
    cout<<"Front: "<<dq.front()<<" Back: "<<dq.back()<<endl;
    dq.pop_front();
    cout<<"After dq.pop_front():"<<endl;
    cout<<"Front: "<<dq.front()<<" Back: "<<dq.back()<<endl;

    // size()
    cout<<"Deque size: "<<dq.size()<<endl;

    if(dq1.empty()) cout<<"dq1 is empty!"<<endl;
    if(!dq.empty()) cout<<"dq is not empty!"<<endl;

    // Operations:
/*
    1. push_front(x)
    2. push_back(x)
    3. pop_front()
    4. pop_back()
    5. front()
    6. back()
    7. empty()
    8. size()
*/ 

    // Real-World Example of Deque
/*
    Scenario:
      - Imagine a web browser.
      - You have a history list where:
        - Forward button adds URLs to the front.
        - Backward button removes from the front.
        - Open new page adds to the back.
*/

    // Real Problem using Deque
/*
    Find the maximum in every sliding window of size k in an array.
        - Example: arr = [1,3,-1,-3,5,3,6,7], k = 3
        - Output: [3,3,5,5,6,7]
*/

}