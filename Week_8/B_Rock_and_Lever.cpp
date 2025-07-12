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

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        map<int,int> mp;
        long long ans = 0;

        for (int i = 0; i < n; i++)
        {
            int hbit = __lg(a[i]);

            if(mp.find(hbit) != mp.end())
            {
                mp[hbit]++;
            }
            else
            {
                mp[hbit] = 1;
            }
        }

        for (auto [key,val]:mp)
        {
            ans += (1LL*val*(val-1))/2;
        }

        cout << ans << endl;
    }
    

    return 0;
}