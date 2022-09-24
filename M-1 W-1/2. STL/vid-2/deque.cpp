#include<iostream>
#include<algorithm>
#include<deque>
using namespace std;

// Double Ended queue
// O(1) push_front , pop_front , push_back , pop_back

int main()
{
    deque<int> dq{4,5,6};  //front => 4 5 6 <= back
    dq.push_front(3);  // 3 4 5 6
    dq.push_front(2);  // 2 3 4 5 6

    dq.push_back(7);  // 2 3 4 5 6 7

    cout << dq[2] << endl;  // 4

    dq.pop_front();   // 3 4 5 6 7

    cout << dq[2] << endl; // 5

} 