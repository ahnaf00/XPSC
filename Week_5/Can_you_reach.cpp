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

        vector<int> h(n);
        for (int i = 0; i < n; i++)
        {
            cin >> h[i];
        }

        vector<int> brk;
        for (int i = 1; i < n; i++)
        {
            if(h[i] < h[i-1] && h[i] < h[i+1] || h[i] > h[i-1] && h[i] > h[i+1])
            {
                brk.push_back(i);
            }
        }

        ll ans = (n*(n-1))/2;

        if(brk.size()<2)
        {
            cout << ans << endl;
            continue;
        }
        int prev = 0;

        for (int i = 0; i < brk.size()-1; i++)
        {
            ll unfrnd = (brk[i]-prev)*(n-1-brk[i+1]);
            ans-=unfrnd;
            prev = brk[i];
        }

        cout << ans << endl;
    }
    

    return 0;
}