#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n,k;
        cin >> n >> k;

        vector<int>a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int cnt = 0, ans = 0;
        for (int i = 0; i < n; i++)
        {
            if(a[i] == 0)
            {
                cnt++;
                if(cnt == k)
                {
                    ans++;
                    cnt = 0;
                    i++;
                }
            }
            else if(a[i] == 1)
            {
                cnt = 0;
                continue;
            }
        }
        
        cout << ans << endl;
        
    }
    

    return 0;
}