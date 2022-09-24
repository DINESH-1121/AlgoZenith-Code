#include <iostream>
#include <algorithm>
using namespace std;

// finds > val
// FwdIT upper_bound(FwdIt l, FwdIt r, val)

// if : RandAccIt O(lg(n))
// else : O(n)

int main()
{
    int a[] = {1, 3, 5, 5, 5, 7, 9, 11, 11, 13};

    cout << upper_bound(a, a + 10, 5) - a << endl;
    cout << upper_bound(a, a + 10, 8) - a << endl;
    cout << upper_bound(a, a + 10, 20) - a << endl;
}