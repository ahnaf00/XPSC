#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n,k;
        cin >> n >> k;

        vector<int>arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        vector<int>bits(31);
        for (int i = 0; i < n; i++)
        {
            for (int j = 30; j >= 0; j--)
            {
                if((arr[i]>>j)&1)
                {
                    bits[j]++;
                }
            }
        }

        int ans = 0;
        for (int i = 30; i >= 0; i--)
        {
            if(bits[i]==n)
            {
                ans+=(1LL<<i);
            }
            else
            {
                int need = n-bits[i];
                if(k>=need)
                {
                    ans+=(1LL<<i);
                    k-=need;
                }
            }
        }
        
        cout << ans << endl;
        
    }
    

    return 0;
}