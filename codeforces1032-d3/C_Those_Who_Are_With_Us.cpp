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

        vector<vector<int>>a(n,vector<int>(m));
        int maxVal = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
                maxVal = max(maxVal,a[i][j]);
            }
        }

        map<int,int>r,c;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if(a[i][j] == maxVal)
                {
                    cnt++;
                    r[i]++;
                    c[j]++;
                }
            }
        }
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if(r[i]+c[j]-(a[i][j] == maxVal)==cnt)
                {
                    flag = true;
                    break;
                }
            }
        }

        if(flag)
        {
            cout << maxVal-1 << endl;
        }
        else
        {
            cout << maxVal << endl;
        }
    }


    

    return 0;
}