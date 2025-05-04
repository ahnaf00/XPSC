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

        int l = 0,r = n-1,ans = n;
        
        while (r>=l)
        {
            if(s[l] == s[r])
            {
                break;
            }
            else
            {
                ans -= 2;
                l++;
                r--;
            }
        }

        cout << ans << endl;
        
    }
    

    return 0;
}