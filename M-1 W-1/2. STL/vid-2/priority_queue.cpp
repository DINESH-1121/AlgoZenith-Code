#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;

// included in the header <queue>
// push(val):insert val , top(): returns max value , pop(): removes the max value 
// implements max heap

void fun()
{
    // if you want implement min heap 
    priority_queue<int,vector<int>,greater<int>> pq;
    pq.push(22);
    pq.push(23);
    pq.push(24);
    pq.push(25);

    cout << pq.top() << endl;  // 22
    pq.pop();
    cout << pq.top() << endl;  // 23

}

int main()
{
    // implement max heap internally
    priority_queue<int> pq;

    pq.push(3);
    pq.push(4);
    pq.push(5);

    cout << pq.top() << endl;  // 5
    pq.pop();

    cout << pq.top() << endl;  // 4

    fun();
}