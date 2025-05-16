#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    int n;
    ll s;

    cin >> n >> s;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int ans = INT_MAX, l = 0, r = 0;
    ll sum = 0;

    while (n > r)
    {
        sum+=v[r];

        while(sum>=s)
        {
            ans = min(ans,r-l+1);
            sum-=v[l];
            l++;
        }
        r++;
    }

    if(ans == INT_MAX)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << ans << endl;
    }
    
    

    return 0;
}