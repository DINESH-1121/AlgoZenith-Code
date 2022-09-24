#include<iostream>
#include<algorithm>
using namespace std;

// FwdIt lower_bound(FwdIt l,FwdIt r, val)
// finds  >= val

// if RandAccIT : O(lg(n))
// else : O(n)

int main()
{
    int a[] = {1,3,5,5,5,7,9,11,11,13};

    cout << lower_bound(a,a+10,5) - a << endl;
    cout << lower_bound(a,a+10,8) - a << endl;
    cout << lower_bound(a,a+10,20) - a << endl;
}