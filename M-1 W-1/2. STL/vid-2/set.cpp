// set is an associative container
// implements red black trees
#include<iostream>
#include<set>
#include<algorithm>
using namespace std;

// set is always sorted and inserts only unique elements
// insert / erase takes O(lg(n))
// count(val) will gives the count of val in the set i.e either 0 or 1
int main()
{
    set<int> s;
    s.insert(1000);
    s.insert(2121);
    s.insert(12);

    cout << *s.begin() << endl; // 12
    cout << *s.rbegin() << endl; // 2121

    s.insert(4);
    s.erase(2121);
    cout << *s.begin() << endl;  // 4
    cout << *s.rbegin() << endl; // 1000

}