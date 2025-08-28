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

        bool flag = true;
        int ans = 0;
        for (int i = 1; i <= n; i<<=1)
        {
            if(s[i-1]!='1')
            {
                ans++;
            }
            if(i==n)
            {
                flag = false;
            }
        }

        if(!flag)
        {
            cout << -1 << endl;
            continue;
        }

        int ans_cover = 0;
        for (int i = n; i >= 1; i--)
        {
            if((i&ans_cover)!=i)
            {
                if(s[i-1]!='0')
                {
                    ans++;
                }
                ans_cover = i;
            }
        }

        cout << ans << endl;
    }
    

    return 0;
}