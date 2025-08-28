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

        vector<int>a(n),b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        for (int i = 0; i < n-1; i++)
        {
            if((a[i]^a[i+1]) == b[i])
            {
                a[i] = b[i];
            }
        }

        for (int i = n-2; i >= 0; i--)
        {
            if((a[i]^a[i+1]) == b[i])
            {
                a[i] = b[i];
            }
        }


        if(a==b)
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