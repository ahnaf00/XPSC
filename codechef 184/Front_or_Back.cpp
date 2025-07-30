#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;

        vector<int>a(n),freq(n,0);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            freq[a[i]]++;
        }

        bool flag = true;

        int ans = 1, mod = 998244353;
        for (int i = 0; i < n/2; i++)
        {
            if(freq[i]+freq[n-i-1]!=2)
            {
                flag = false;
                break;
            }

            ans= ans*2%mod;
        }

        if(flag)
        {
            cout << ans << endl;
        }
        else
        {
            cout << 0 << endl;
        }
        
        
    }
    

    return 0;
}