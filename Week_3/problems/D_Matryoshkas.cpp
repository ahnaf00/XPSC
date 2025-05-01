#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;

        multiset<int>ms;

        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            ms.insert(x);
        }

        int ans = 0;

        while (!ms.empty())
        {
            int curr = *ms.begin();
            ms.erase(ms.begin());

            while (true)
            {
                auto it = ms.find(curr+1);
                if(it != ms.end())
                {
                    curr = *it;
                    ms.erase(it);
                }
                else
                {
                    break;
                }
            }
            ans++;

        }
        
        cout << ans << endl;
    }
    

    return 0;
}