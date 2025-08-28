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

        string a;
        cin >> a;

        int m;
        cin >> m;

        string b,c,ans=a;
        cin >> b >> c;

        for (int i = 0; i < m; i++)
        {
            if(c[i]=='D')
            {
                ans = ans+b[i];
            }
            else if(c[i] == 'V')
            {
                ans = b[i]+ans;
            }
        }
        
        cout << ans << endl;

    }
    

    return 0;
}