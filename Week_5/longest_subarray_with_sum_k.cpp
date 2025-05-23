#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    int n,k;
    cin >> n >> k;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    map<ll,int> mp;

    int ans = 0;
    ll sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];

        if(sum == k)
        {
            ans = i+1;
        }

        if(mp.find(sum-k) != mp.end())
        {
            ans = max(ans, i-mp[sum-k]);
        }

        if(mp.find(sum) == mp.end())
        {
            mp[sum] = i;
        }

    }

    cout << ans << endl;

    return 0;
}