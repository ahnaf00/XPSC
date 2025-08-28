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
        
        vector<int>a(n);
        map<int,int>mp;
        int mx = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
            mx = max(mx,mp[a[i]]);
        }

        int ans = min(n-mx+1,n-mp[1]);

        cout << ans << endl;
        
    }
    

    return 0;
}