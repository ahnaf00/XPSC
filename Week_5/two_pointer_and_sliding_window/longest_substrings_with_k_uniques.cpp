#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int k;
    cin >> k;

    int ans = 0, l = 0, r = 0;

    map<char,int>mp;

    while (s.size() > r)
    {
        mp[s[r]]++;

        if(mp.size() == k)
        {
            ans = max(ans,r-l+1);
        }
        else
        {
            while (mp.size()>k)
            {
                mp[s[l]]--;
                if(mp[s[l]] == 0)
                {
                    mp.erase(s[l]);
                }
                l++;
            }
        }
        r++;
    }

    cout << ans << endl;
    

    return 0;
}