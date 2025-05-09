#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int a,b,n;
        cin >> a >> b >> n;
        vector<int> ns(n);

        for (int i = 0; i < n; i++)
        {
            cin >> ns[i];
        }

        ll ans = b;

        for (int i = 0; i < n; i++)
        {
            ans += min(1ll*a,1ll+ns[i])-1;
        }
    

        cout << ans << endl;

    }
        
    
    return 0;
}