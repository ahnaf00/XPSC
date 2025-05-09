#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n,k,q;
        cin >> n >> k >> q;

        vector<int>a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<int>v;
        for(int i = 0; i < n; i++)
        {
            if(a[i]<=q)
            {
                v.push_back(1);
            }
            else
            {
                v.push_back(0);
            }
        }
        v.push_back(0);
        
        ll ans = 0;
        int cnt = 0;
        
        for (int i = 0; i <= n; i++)
        {
            if(v[i] == 1)
            {
                cnt++;
            }
            else
            {
                if(cnt>=k)
                {
                    ans+=1ll*(cnt-k+1)*(cnt-k+2)/2;
                }
                cnt = 0;
            }
        }
        
        cout << ans << endl;
    }
    

    return 0;
}