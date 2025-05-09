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

        int ans = INT_MAX;

        for (int i = 'a'; i <= 'z'; i++)
        {
            int change = 0, l = 0, r = n-1;

            while (r>=l)
            {
                if(s[l]!=s[r])
                {
                    if(s[l]==i)
                    {
                        l++;
                        change++;
                    }
                    else if(s[r] == i)
                    {
                        r--;
                        change++;
                    }
                    else
                    {
                        change = INT_MAX;
                        break;
                    }
                }
                else
                {
                    l++;
                    r--;
                }
            }
            ans = min(ans,change);
        }
        
        if(ans == INT_MAX)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << ans << endl;
        }
        
    }
    

    return 0;
}