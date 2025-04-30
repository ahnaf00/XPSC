#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n,m,q;
        cin >> n >> m >> q;

        vector<int> tcr(m);
        for (int i = 0; i < m; i++)
        {
            cin >> tcr[i];
        }

        sort(tcr.begin(),tcr.end());

        for (int i = 0; i < q; i++)
        {
            int d;
            cin >> d;

            if(d<tcr[0])
            {
                cout << tcr[0]-1 << endl;
                continue;
            }

            if(d > tcr[m-1])
            {
                cout << n-tcr[m-1] << endl;
                continue;
            }

            auto lft = lower_bound(tcr.begin(), tcr.end(),d);
            auto rgt = lft--;

            int mid = (*rgt+*lft)/2;

            cout << min(abs(mid-*lft),abs(mid-*rgt)) << endl;
        }
    }
    

    return 0;
}