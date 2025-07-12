#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;

        vector<ll>a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll g1 = 0, g2 = 0;
        for (int i = 0; i < n; i+=2)
        {
            g1 = __gcd(g1,a[i]);
        }

        bool ok = true;

        for (int i = 1; i < n; i+=2)
        {
            g2 = __gcd(g2,a[i]);

            if(a[i]%g1 == 0)
            {
                ok = false;
            }
        }

        ll ans = 0;
        
        if(ok)
        {
            ans = g1;
        }
        else
        {
            ok = true;
            for (int i = 0; i < n; i+=2)
            {
                if(a[i]%g2 == 0)
                {
                    ok = false;
                }
            }   

            if(ok)
            {
                ans = g2;
            }
        }

        cout << ans << endl;
        
    }
    

    return 0;
}