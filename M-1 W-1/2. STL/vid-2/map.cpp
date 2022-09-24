// set is an associative container
// implements red black trees
#include<iostream>
#include<algorithm>
#include<map>
using namespace std;

// if key is not found an insertion is performed
// if key is found the value is updated

// find(val) operator returns an iterator if val is not found it returns m.end() 

int main()
{
    map<int,string> m;

    m[1] = "dinesh";
    m[2] = "abc";
    m[4] = "def";


    auto it =  m.find(4);
    cout << it->first << " " << it->second << endl;
}