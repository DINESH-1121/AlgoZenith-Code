#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;

// push(val) , pop(), top()  

int main()
{
    stack<int> s;

    s.push(5);
    s.push(4);
    s.push(3);
    s.push(2);

    while(!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
}