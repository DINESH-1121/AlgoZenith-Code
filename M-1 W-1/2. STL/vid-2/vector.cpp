#include<iostream>
#include<vector>
using namespace std;

void fun1()
{
    vector<int> v;
    vector<long long> v1(100);
    vector<int> v2(10, 0);

    v.push_back(10);
    v.push_back(29);
    v.push_back(15);

    v.pop_back();
}

void fun2()
{

    int n, m;
    cin >> n >> m;

    vector<vector<int>> V(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> V[i][j];
    }
}

void fun3()
{
    // operators
    vector<int> a{1,2,3};
    vector<int> b{1,2,3};
    vector<int> c{1,2,4};
    vector<int> d{1,2,3,0};

    cout << (a == b) << endl; // 1
    cout << (a > c) << endl;  // 0
    cout << (b != c) << endl; // 1 
    cout << (a < d) << endl;  // 1
}

int main()
{
    

    

    
    
}  