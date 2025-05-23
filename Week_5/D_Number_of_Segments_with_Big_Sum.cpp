#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    int n;
    ll s;

    cin >> n >> s;

    vector<int>v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    ll sum = 0, ans = 0;
    int l = 0, r = 0;

    while (n > r)
    {
        sum+=v[r];
        while(sum >= s)
        {
            ans+=n-r;
            sum-=v[l];
            l++;
        }
        r++;
    }

    cout << ans << endl;
    
    
    
    return 0;
}