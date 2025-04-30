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

        vector<string> a(n);

        map<char,ll> f;
        map<char,ll> s;
        map<string,ll> o;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            f[a[i][0]]++;
            s[a[i][1]]++;
            o[a[i]]++;
        }
        
        ll ans = 0;

        for (int i = 0; i < n; i++)
        {
            ll x = f[a[i][0]]-o[a[i]];
            ans+=x;
            x = s[a[i][1]]-o[a[i]];
            ans+=x;
            if(f[a[i][0]] > 0)
            {
                f[a[i][0]]--;
            }

            if(s[a[i][1]] > 0)
            {
                s[a[i][1]]--;
            }

            if(o[a[i]] > 0)
            {
                o[a[i]]--;
            }
        }
        cout << ans << endl;
        
    }
    

    return 0;
}