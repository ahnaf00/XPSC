#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    int n,k;
    cin >> n >> k;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    map<int,int> mp;
    int l = 0, r = 0;
    ll ans = 0;

    while (n > r)
    {
        mp[v[r]]++;

        if(mp.size() <= k)
        {
            ans+=r-l+1;
        }
        else
        {
            while (mp.size()>k)
            {
                mp[v[l]]--;
                if(mp[v[l]] == 0)
                {
                    mp.erase(v[l]);
                }
                l++;
            }
            ans+=r-l+1;
        }
        r++;
    }
    
    cout << ans << endl;

    return 0;
}