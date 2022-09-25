#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,m1;
    cin >> n >> m1;

    int x;

    map<int,int> m;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        m[x]++;   
    }

    for(int j=0;j<m1;j++)
    {
        cin >> x;
        if(m.count(x)==1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}

int main()
{
    int t;
    cin >> t;

    while(t--)
        solve();
}