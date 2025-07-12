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

        string s;
        cin >> s;

        map<char,int>mp;

        for (int i = 0; i < s.size(); i++)
        {
            if(s[i]!='?')
            {
                mp[s[i]]++;
            }
        }

        int ans = 0;
        for(auto [key,value]:mp)
        {
            ans+=min(n,value);
        }

        cout << ans << endl;
    }
    

    return 0;
}