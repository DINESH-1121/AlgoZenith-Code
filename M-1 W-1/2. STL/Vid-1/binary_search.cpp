#include<iostream>
#include<algorithm>
using namespace std;

// bool binary_search(FwdIt l, FwdIt r, val) 
// searches in the range [l,r)  
// if : RandAccIt O(lg n)
// else :  O(n)

int main()
{
    int a[10] = {1,3,5,7,9,11,13,15,17,19};

    cout << binary_search(a,a+10,5) << endl;
    cout << binary_search(a,a+10,6) << endl;
}