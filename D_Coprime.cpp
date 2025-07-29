#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> ans(1111);

    for (int i = 1; i <= 1000; i++)
    {
        for (int j = 1; j <= 1000; j++)
        {
            if(__gcd(i,j)==1)
            {
                ans[i].push_back(j);
            }
        }
    }

    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;

        vector<int> a(n+1);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        vector<int> maxIdx(1111,-1);
        for (int i = 1; i <= n; i++)
        {
            maxIdx[a[i]]=i;
        }
        
        int res = -1;
        for (int i = 1; i <= 1000; i++)
        {
            if(maxIdx[i]==-1)
            {
                continue;
            }

            if(i==1)
            {
                res = max(res,2*maxIdx[i]);
                continue;
            }

            for (auto p:ans[i])
            {
                if(maxIdx[p]!=-1)
                {
                    res = max(res,maxIdx[i]+maxIdx[p]);
                }
            }
        }

        
        cout << res << endl;

    }
    

    return 0;
}