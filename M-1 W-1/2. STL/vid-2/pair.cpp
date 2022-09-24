#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;

void fun()
{
    vector<pair<string, int>> m;

    m.push_back({"dinesh", 123});
    m.push_back({"abc", 432});
    m.push_back({"ghi", 678});

    cout << "function :" << endl;
    for(auto x : m)
        cout << x.first << " " << x.second << endl;

    cout << "after: " << endl;

    sort(m.begin(), m.end());
    for(auto x : m)
        cout << x.first << " " << x.second << endl;

    sort(m.begin(), m.end());
    for (auto x : m)
        cout << x.first << " " << x.second << endl;
}

int main()
{
    pair<string, int> p;
    p.first = "dinesh";
    p.second = 1121;
    cout << p.first << " " << p.second << endl;

    pair<string, int> q{"abc", 123};
    cout << q.first << " " << q.second << endl;

    fun();
}