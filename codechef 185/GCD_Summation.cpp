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

        if(n-1==k)
        {
            for (int i = 1; i <= n; i++)
            {
                cout << i << " ";
            }
            cout << endl;
            continue;
        }

        vector<int>ans(n);
        int val = 1e9;
        for (int i = 0; i < n-2; i++)
        {
            // ans.push_back(val);
            ans[i] = val;
            val--;
        }

        if(ans.size()>2)
        {
            ans[n-3] = 1;
        }

        k-=(n-2);
        ans[n-2] = k;
        ans[n-1] = k*2;

        // ans.push_back(remain);
        // ans.push_back(remain*2);


        // int sum = 0;
        // for(int i = 0; i < n-1; i++)
        // {
        //     sum+=__gcd(ans[i],ans[i+1]);
        // }

        if(k<=0)
        {
            cout << -1 << endl;
            continue;
        }
        for(auto x:ans)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    

    return 0;
}