#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n,k;
        cin >> n >> k;

        char a[n][n];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }

        for (int i = 0; i < n; i+=k)
        {
            for (int j = 0; j < n; j+=k)
            {
                cout << a[i][j];
            }
            cout << endl;
        }
        
    }
    

    return 0;
}