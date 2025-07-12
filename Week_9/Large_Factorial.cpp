#include <bits/stdc++.h>
using namespace std;

#define ll long long int
const int MOD = 1e9+7;

int fact(ll n)
{
    if(n>=1)
    {
        return n*fact(n-1)%MOD;
    }
    else
    {
        return 1;
    }
}

int main()
{
    int tc;
    cin >> tc;
    
    while (tc--)
    {
        ll n;
        cin >> n;
        cout  << fact(n) << endl;
    }
    
    return 0;
}