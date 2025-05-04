#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    int n,m;
    cin >> n >> m;

    vector<ll> a(n),b(m);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    
    int l = 0, r = 0;
    ll ans = 0;

    while (l < n && r < m)
    {
        ll curr= a[l], count1 = 0, count2 = 0;

        while (l < n && a[l] == curr)
        {
            count1++;
            l++;
        }

        while (r < m && curr > b[r])
        {
            r++;
        }
        
        while (r < m && b[r] == curr)
        {
            count2++;
            r++;
        }
        ans += (1ll * count1* count2);
    }
    
    cout << ans << endl;
    

    
    
    return 0;
}