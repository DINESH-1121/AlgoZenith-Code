#include <iostream>
#include <utility>
#include <list>
using namespace std;

// implements bi-directional linked list
// INSERTION:
// it = l.insert(it,val)   takes O(1) time
// DELETION:
// it = l.erase(it) takes O(1) time

void fun1()
{
    list<int> l{10, 20}; // 10 20
    cout << l.front() << endl;
    cout << l.back() << endl;

    l.push_back(30); // 10 20 30
    l.push_front(5); // 5 10 20 30

    auto it = l.begin(); // >5 10 20 30
    it++;                // 5 >10 20 30

    it = l.erase(it); //  5 >20 30
    ++it;             // 5 20 >30

    it = l.insert(it, 25); // 5 20 >25 30

    l.insert(l.end(), 40); // 5 20 >25 30 40

    cout << *it << endl;

    cout << "Print all :" << endl;

    it = l.begin();
    while (it != l.end())
    {
        cout << *it << " ";
        it++;
    }
    cout << endl;
}

void fun2()
{
    list<int> l{1, 4, 2, 8, 5, 7};

    cout << "Printing list in reverse order: " << endl;

    for (auto it = l.rbegin(); it != l.rend(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;

    // cannot use sort(l.begin(),l.end()) it returns BiDirIt instead of RndAccIt
    l.sort();

    cout << "After sorting the list and displaying it reverse order : " << endl;
    for (auto it = l.rbegin(); it != l.rend(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    fun1();
    fun2();
}