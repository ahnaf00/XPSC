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

        int minVal = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            minVal = min(minVal,a[i]);
        }
        
        int ans = 0, idx = -1;
        for (int i = 0; i < n; i++)
        {
            if(a[i] == minVal)
            {
                idx = i;
                break;
            }
        }
        
        for (int i = 0; i < idx; i++)
        {
            minVal--;
            ans++;
        }

        if(minVal<0)
        {
            cout << ans << endl;
        }
        else
        {
            cout << ans+minVal << endl;
        }

    }

    return 0;
}