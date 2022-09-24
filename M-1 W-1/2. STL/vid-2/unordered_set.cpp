// set is an associative container
// implements red black trees
#include<iostream>
#include<algorithm>
#include<unordered_set>
using namespace std;

// it inserts element without any specific ordering
// element are unordered, hence cannot perform binary search
// begin() does not return smallest element

int main()
{
    unordered_set<int> us;
    us.insert(3);
    us.insert(1);
    us.insert(2);
    us.insert(5);
    us.insert(6);

    for (auto it=us.begin(); it != us.end();++it)
        cout << *it << " ";   // 5 3 1 6 2
    cout << endl;
}