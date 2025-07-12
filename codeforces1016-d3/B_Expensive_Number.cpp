#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        string s;
        cin >> s;

        int n = s.size();
        int idx = 0, ans = 0;
        for (int i = n-1; i >= 0; i--)
        {
            int num = s[i]-'0';
            if(num>=1)
            {
                idx = i;
                break;
            }
            else
            {
                ans++;
            }
        }

        for (int i = 0; i < idx; i++)
        {
            if(s[i]!='0')
            {
                ans++;
            }
        }
        
        cout << ans << endl;
    }
    

    return 0;
}
