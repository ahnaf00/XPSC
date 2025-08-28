#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;

        vector<ll>a(n);
        ll ans = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i] == 1)
            {
                ans++;
            }
        }
        
        if(ans == n)
        {
            cout << ans%2 << endl;
        }
        else
        {
            cout << 499122177 << endl;
        }
    }
    
    return 0;
}