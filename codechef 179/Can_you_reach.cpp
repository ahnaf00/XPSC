#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        ll n;
        cin >> n;

        vector<ll> h(n);

        for (int i = 0; i < n; i++)
        {
            cin >> h[i];
        }
        
        vector<ll> brkpoints;

        for (int i = 1; i < n-1; i++)
        {
            if(h[i-1] > h[i] && h[i+1]>h[i] || h[i-1] < h[i] && h[i+1]<h[i])
            {
                brkpoints.push_back(i);
            }
        }
        
        ll ans = (n*(n-1))/2;
        if(brkpoints.size()<2){
            cout << ans << endl;
            continue;
        }

        ll prev = 0;
        ll ln = brkpoints.size();
        for (int i = 0; i < ln-1; i++)
        {
            ll unfrnd = (brkpoints[i]-prev)*(n-1-brkpoints[i+1]);
            ans-=unfrnd;
            prev = brkpoints[i];
        }

        cout << ans << endl;
        
    }
    

    return 0;
}