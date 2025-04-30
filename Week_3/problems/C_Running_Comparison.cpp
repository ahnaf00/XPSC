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
        
        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<int> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if(2*a[i] < b[i])
            {
                continue;
            }
            else if( 2*b[i] < a[i] )
            {
                continue;
            }
            else
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
    

    return 0;
}