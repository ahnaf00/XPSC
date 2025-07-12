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

        vector<int> v(n+1);
        ll ans = 0, ans2 = 0;

        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }

        if(n == 1)
        {
            cout << v[1] << endl;
            continue;
        }

        // if(n%2 == 0)
        // {
        //     for (int i = 1; i <= n; i++)
        //     {
        //         if(i%2==0)
        //         {
        //             ans+=v[i];
        //         }
        //     }
        // }
        // else
        // {
        //     for (int i = 1; i <= n; i++)
        //     {
        //         if(i%2==1)
        //         {
        //             ans+=v[i];
        //         }
        //     }
        // }

        for (int i = 1; i <= n; i++)
        {
            if(i%2==0)
            {
                ans+=v[i];
            }
            else
            {
                ans2+=v[i];
            }
        }


        if(ans > ans2)
        {
            cout << ans << endl;
        }
        else
        {
            cout << ans2 << endl;
        }
    }
    

    return 0;
}