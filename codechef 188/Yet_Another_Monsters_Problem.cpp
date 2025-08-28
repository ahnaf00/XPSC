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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(),a.end());

        int ans = n;
        for (int i = 0; i < n; i++)
        {
            int time = a[i]+n-(i+1);
            ans = min(ans,time);
        }
        cout << ans << endl;
    }
    

    return 0;
}