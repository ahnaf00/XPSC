#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n,m;
        cin >> n >> m;

        vector<vector<int>> a(n,vector<int>(m,0));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }

        vector<int>diff = {1,-1};
        int ans = n*m;
        for (int rd:diff)
        {
            for(int cd:diff)
            {
                map<int,int>freq;
                for (int i = 0; i < n; i++)
                {
                    for (int j = 0; j < m; j++)
                    {
                        freq[a[i][j]-i*rd-j*cd]++;
                    }
                }
                int mx = 0;
                for (auto val:freq)
                {
                    mx = max(mx,val.second);
                }
                ans = min(ans,n*m-mx);
            }
        }
        cout << ans << endl;
        
    }
    

    return 0;
}