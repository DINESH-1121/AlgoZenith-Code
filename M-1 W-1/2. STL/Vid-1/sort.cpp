#include<iostream>
#include<algorithm>
using namespace std;

// sort(randAccIt l, randAccIt r)
// range : [l, r)
// Best case : O(n) where n = (r-l)
// Avg/Worst case : O(n lg(n)) where n = (r-l)

void fun1()
{
    int a[10] = {4, 7, 1, 8, 2, 5, 4, 9, 6, 3};

    sort(a, a + 10);

    for (int x : a)
        cout << x << " "; // 1 2 3 4 4 5 6 7 8 9
    cout << endl;
}

int main()
{
    
}