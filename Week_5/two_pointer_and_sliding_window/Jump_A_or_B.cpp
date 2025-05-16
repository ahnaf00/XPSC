#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n,m,a,b;

        cin >> n >> m >> a >>b;

        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            if(ans<=m)
            {
                ans+=b;
            }
            else
            {
                ans+=a;
            }
        }
        
        if(ans == m)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    

    return 0;
}