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

        vector<ll> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll sum = 0;
        int l = 0, r = 0, cnt = 0;
        ll maxElm = INT_MIN;

        while (r<n)
        {
            sum+=a[r];
            maxElm = max(maxElm,a[r]);
            if((sum-maxElm)==maxElm)
            {
                cnt++;
            }

            r++;
        }
        
        cout << cnt << endl;
        
    }
    

    return 0;
}