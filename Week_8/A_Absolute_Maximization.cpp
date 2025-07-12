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

        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll ans = 0;
        for (int i = 0; i <= 12; i++)
        {
            bool ones = false, zeros = false;
            for (int j = 0; j < n; j++)
            {
                bitset<13> b(a[j]);
                ones |= (b[i]==1);
                zeros |= (b[i] == 0);
            }
            if(ones&zeros)
            {
                ans+=(1LL<<i);
            }
        }
        cout << ans << endl;
    }
    

    return 0;
}