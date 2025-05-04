#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    int n,m;
    cin >> n >> m;

    vector<ll> a(n),b(m);
    map<ll,ll>mp;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    ll ans = 0;

    for (int i = 0; i < m; i++)
    {
        ans += mp[b[i]];
    }

    cout << ans << endl;
    
    
    return 0;
}