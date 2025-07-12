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

        string s, ans="";
        cin >> s;

        int gp = 0, mustNeed = 0;
        int l = 0, r = n-1;

        while (l<r)
        {
            if(s[l]==s[r])
            {
                gp+=2;
            }
            else
            {
                mustNeed++;
            }
            l++, r--;
        }
        
        for (int i = 0; i <= n; i++)
        {
            int total = i;
            total-=mustNeed;

            if(total<0)
            {
                ans.push_back('0');
                continue;
            }

            total = max((total%2),total-gp);
            total = max(0,total-(n%2));

            if(total == 0)
            {
                ans.push_back('1');
            }
            else
            {
                ans.push_back('0');
            }
        }
        
        cout << ans << endl;
    }
    

    return 0;
}