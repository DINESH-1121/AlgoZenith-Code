#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;

int main()
{
    queue<int> q;
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);

    q.pop();

    while(!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
}