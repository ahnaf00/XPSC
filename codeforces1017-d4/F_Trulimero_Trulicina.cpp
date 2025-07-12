#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n,m,k;
        cin >> n >> m >> k;

        vector<vector<int>>ans(n,vector<int>(m,0));
        int curr = 1;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                ans[i][j] = curr;
                curr++;
                if(curr > k)
                {
                    curr = 1;
                }
            }
        }

        if(m%k==0)
        {
            int nxt = 0;
            for (int i = 0; i < n; i++)
            {
                rotate(ans[i].begin(),ans[i].begin()+nxt, ans[i].begin()+m);
                nxt++;

                if(nxt==m)
                {
                    nxt = 0;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << endl;
        }
    }
    

    return 0;
}