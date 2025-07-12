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

        vector<ll> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(),v.end());

        ll ans = 1;

        for (int i = 0; i < n; i++)
        {
            if(v[i]-i < 1)
            {
                ans = 0;
                break;
            }
        
            ans*=v[i]-i;
            ans%=998244353;
        }
        cout << ans << endl;

    }
    




    return 0;
}