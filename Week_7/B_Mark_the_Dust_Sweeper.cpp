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

        reverse(a.begin(),a.end());

        while (!a.empty() && a.back() == 0)
        {
            a.pop_back();
        }

        if(a.empty())
        {
            cout << 0 << endl;
            continue;
        }
        
        reverse(a.begin(),a.end());

        int ln = a.size();

        long long ans = 0;

        for (int i = 0; i < ln-1; i++)
        {
            if(a[i] == 0)
            {
                ans++;
            }
            else
            {
                ans+=a[i];
            }
        }
        
        cout << ans << endl;
    }
    

    return 0;
}