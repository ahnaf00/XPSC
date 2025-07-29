#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ll n;
    cin >> n;

    vector<ll>a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    sort(a.begin(),a.end());

    ll midIdx = n/2;
    ll ans = 0;

    for (int i = 0; i < n; i++)
    {
        ans+=abs(a[midIdx]-a[i]);
    }

    cout << ans << endl;
    

    return 0;
}