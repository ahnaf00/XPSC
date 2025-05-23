#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n,m,k;
        cin >> n >> m >> k;
        int total = 0;
        total = n*m;
        
        int ans = 0;
        int l = n;
        int r = m;
        int p1 = 0, p2 = 0;

        for (int i = 1; i < n; i++)
        {
            if(l*i>=k)
            {
                p1 = l*i;
                break;
            }
        }

        for (int i = 1; i < m; i++)
        {
            if(r*i>=k)
            {
                p2 = l*i;
                break;
            }
        }
        
        ans = min(p1,p2);
        
        cout << total-ans << endl;
    }
    

    return 0;
}

