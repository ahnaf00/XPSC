#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n,m;
        cin >> n >> m;

        vector<int>a(n+1);
        vector<int>b(m+1);

        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        for (int i = 1; i <= m; i++)
        {
            cin >> b[i];
        }
        
        int lastZero = 0, lastOne = 0, deleted = 0;

        for (int i = 1; i <= n; i++)
        {
            if(i<=m)
            {
                if(b[i] == 0)
                {
                    lastZero = i;
                }
                else
                {
                    lastOne = i;
                }
            }

            if(a[i] == 0 && i-lastZero <= deleted)
            {
                deleted++;
            }

            if(a[i] == 1 && i-lastOne <= deleted)
            {
                deleted++;
            }
        }

        cout << n-deleted << endl;
    
    }
    

    return 0;
}