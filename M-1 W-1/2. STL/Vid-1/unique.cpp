#include<iostream>
#include<algorithm>
using namespace std;

// FwdIt unique(FwdIt l, FwdIt r)
// removes consecutive equal elements and returns and forward Iterator to the end of the range 
// range : [l,r)
// TC : O(n)

int main()
{
    string s = "abcccdddcccbbaa";

    int newLen = unique(s.begin(),s.end()) - s.begin();
    s.resize(newLen);

    cout << s << endl;

    // To get unique elements : first sort the range then apply unique function to it

}