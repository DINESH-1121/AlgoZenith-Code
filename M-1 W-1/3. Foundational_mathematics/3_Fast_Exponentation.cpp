#include<bits/stdc++.h>
using namespace std;

using ll = long long;

// (a pow(b)) mod c
void binary_exponentation(ll a,ll b,ll c)
{
    int ans =1;
    while(b)
    {
        if(b%2==1)
        {
            ans = (ans*a) % c;
        }
        a = a*a %c;
        b = b>>1;
    }
    cout <<ans << endl;
}

int main()
{
    ll a,b;
    cin >> a >>b;

    binary_exponentation(a,b,1e9+7);
}