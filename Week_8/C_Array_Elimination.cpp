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

        vector<int>cnt(32,0);
        for (int i = 0; i < 32; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if((a[j]&(1<<i)))
                {
                    cnt[i]++;
                }
            }
        }

        vector<int>ans;
        for (int i = 1; i <= n; i++)
        {
            bool ok = true;
            for (int j = 0; j < 32; j++)
            {
                if(cnt[j]%i!=0)
                {
                    ok = false;
                    break;
                }
            }
            if(ok)
            {
                ans.push_back(i);
            }
        }

        for(auto x : ans)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    

    return 0;
}