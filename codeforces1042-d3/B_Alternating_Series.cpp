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

        vector<int>a(n+1,-1);
        
        if(n%2==0)
        {
            for (int i = 1; i <= n-1; i++)
            {
                if(i%2==0)
                {
                    a[i] = 3;
                }
            }
            a[n] = 2;
        }
        else
        {
            for (int i = 1; i <= n; i++)
            {
                if(i%2==0)
                {
                    a[i] = 3;
                }
            }
        }

        for (int i = 1; i <= n; i++)
        {
            cout << a[i] << " ";
        }

        cout << endl;
    }
    

    return 0;
}