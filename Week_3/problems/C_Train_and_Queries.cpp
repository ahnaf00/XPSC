#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while(tc--)
    {
        int n,m;
        cin >> n>> m;

        map<int,set<int>> mp;

        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            mp[x].insert(i);
        }

        for (int i = 1; i <= m; i++)
        {
            int l,r;
            cin >> l >> r;

            if(mp.find(l) == mp.end() ||mp.find(r) == mp.end() )
            {
                cout << "NO" << endl;
            }
            else
            {
                int startLeftIdx = *mp[l].begin();
                int endRightIdx = *mp[r].rbegin();

                if(startLeftIdx < endRightIdx)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
        }
        
    }

    

    return 0;
}