#include<iostream>
#include<algorithm>

using namespace std;

// reverse(BiDirIt l, BiDirIt r)
// range [l,r)

// Time Complexity: O(n)

void fun1()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << "before: " << endl;
    for (auto x : a)
        cout << x << " ";
    cout << endl;
    reverse(a, a + 10);

    cout << "after: " << endl;
    for (auto x : a)
        cout << x << " "; // 10 9 8 7 6 5 4 3 2 1
    cout << endl;
}

void fun2()
{
    string s = "Hello";

    cout << "before: "<< endl;
    for(auto x:s)
        cout << x << " ";
    cout << endl;

    reverse(s.begin(),s.end());

    cout << "after: " << endl; 
    for (auto x : s)
        cout << x << " ";
    cout << endl;
}

int main()
{
    fun1();
    fun2();   
}