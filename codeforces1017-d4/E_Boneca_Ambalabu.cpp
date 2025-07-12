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

        vector<int>a(n), bits(30);
        
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            for (int b = 0; b < 30; b++)
            {
                if((a[i] & (1<<b))!=0)
                {
                    bits[b]++;
                }
            }
        }
        
        ll ans = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            ll sum = 0;
            for (int b = 0; b < 30; b++)
            {
                if((a[i] & (1<<b))!=0)
                {
                    sum+=((ll)n-bits[b])<<b;
                }
                else
                {
                    sum+=((ll)bits[b]<<b);
                }
            }

            ans = max(ans,sum);
        }
        
        cout << ans << endl;

    }
    

    return 0;
}