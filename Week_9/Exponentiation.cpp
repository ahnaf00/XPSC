#include <bits/stdc++.h>
using namespace std;

#define ll long long int
const int MOD = 1e9+7;

ll power(ll a , ll b)
{
    a %= MOD;
    ll result = 1;
    
    while (b > 0)
    {
        if (b % 2 == 1)
        {
            result = (result * a) % MOD;
        }
        a = (a * a) % MOD;
        b /= 2;
    }

    return result;
}

int main()
{
    int tc;
    cin >> tc;
    
    while (tc--)
    {
        ll a, b;
        cin >> a >> b;

        cout << power(a, b) << endl;
    }
    
    return 0;
}
