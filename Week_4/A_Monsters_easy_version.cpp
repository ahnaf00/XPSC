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

        vector<ll> v(n),b(n);
        
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        b = v;

        sort(v.begin(),v.end());
        sort(b.begin(),b.end());

        ll curr = 1;
        
        for (int i = 0; i < n; i++)
        {
            if(v[i] == curr)
            {
                curr++;
            }
            else if(curr > v[i])
            {
                continue;
            }
            else
            {
                v[i] = curr;
                curr++;
            }
        }

        ll ans = 0;

        for (int i = 0; i < n; i++)
        {
            ans+=abs(b[i]-v[i]);
        }
        
        cout << ans << endl;
    }
    

    return 0;
}
