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

    int l = 0, r = 0;
    ll sum = 0, ans = 0;

    while (n>r)
    {
        sum+=v[r];

        if(sum <= s)
        {
            ans+=(r-l+1);
        }
        else
        {
            while (sum>s && l<=r)
            {
                sum-=v[l];
                l++;
            }

            if(sum <= s)
            {
                ans+=(r-l+1);
            }
        }
        r++;
    }
    
    cout << ans << endl;
    

    return 0;
}