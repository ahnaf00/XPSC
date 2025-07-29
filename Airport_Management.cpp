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

        vector<int>arrival(n), dept(n);
        map<int,int>mp;
        for (int i = 0; i < n; i++)
        {
            cin >> arrival[i];
            mp[arrival[i]]++;
        }

        for (int i = 0; i < n; i++)
        {
            cin >> dept[i];
            mp[dept[i]]++;
        }
        
        int ans = INT_MIN;

        for(auto [key,val]:mp)
        {
            ans = max(ans,val);
        }
        cout << ans << endl;
        
    }
    

    return 0;
}