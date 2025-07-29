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

        int ans=0,p1=INT_MAX,p2=INT_MAX;

        if(k == 0)
        {
            cout << n*m << endl;
            continue;
        }

        for (int i = 1; i <= n; i++)
        {
            if(i*m>=k)
            {
                p1 = (n-i)*m;
                break;
            }
        }

        for (int i = 1; i <= m; i++)
        {
            if(i*n>=k)
            {
                p2 = (m-i)*n;
                break;
            }
        }
        

        cout<< max(p1,p2) << endl;
        
    }
    

    return 0;
}