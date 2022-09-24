#include <bits/stdc++.h>
using namespace std;

template <class T> T absmax(T a, T b)
{
    return abs(a) > abs(b) ? a : b;
}

int main()
{
    cout << absmax(-1, -5) << endl; // -5
    // datatypes of a and b should be same if different it throws compilation error.

    cout << absmax(1, 5) << endl; // 5

    cout << absmax('a', 'b') << endl; // b

    // cout << absmax(string{"a"},string{"b"}}) << endl; throws compilation error because cannot find absolute value of string
}