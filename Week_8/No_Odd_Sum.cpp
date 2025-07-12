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

        map<int,int> mp;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;

            if(mp.find(num) != mp.end())
            {
                mp[num]++;
            }
            else
            {
                mp[num] = 1;
            }
        }

        int ans = INT_MAX;

        if(mp[1] == n || mp[2] == n || mp.size() == 1)
        {
            cout << 0 << endl;
        }
        else
        {
            if(mp[1]%2 == 0 && mp[2]>mp[1]/2)
            {
                ans = mp[1]/2;
            }
            else if(mp[1]%2 == 1)
            {
                ans  = mp[2];
            }
            else
            {
                ans = mp[2];
            }

            cout << ans << endl;
        }
    }
    

    return 0;
}