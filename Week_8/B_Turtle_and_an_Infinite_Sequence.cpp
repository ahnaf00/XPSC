#include <bits/stdc++.h>
using namespace std;

#define ll long long int

bool check_ith_bit(ll n, ll i)
{
    return ((n>>i)&1LL);
}

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n,m;
        cin >> n >> m;

        ll l = max(0,n-m);
        ll r = n+m;

        ll ans = 0;
        ll val = 1;

        for (int i = 0; i <= 32; i++)
        {
            if(r-l>=val)
            {
                ans+=val;
            }
            else if (check_ith_bit(l,i))
            {
                ans+=val;
            }
            else if(check_ith_bit(r,i))
            {
                ans+=val;
            }

            val*=2;
        }
        
        cout << ans << endl;
        
    }
    

    return 0;
}