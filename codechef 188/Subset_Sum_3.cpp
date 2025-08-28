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

        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        vector<bool>dp(3,false);
        for (int i = 0; i < n; i++)
        {
            vector<bool> newdp = dp;
            newdp[v[i]%3] = true;
            for (int j = 0; j < 3; j++)
            {
                if(dp[j])
                {
                    newdp[(j+v[i])%3] = true;
                }
            }

            dp = newdp;
            
        }

        if(dp[0])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    

    return 0;
}
