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

        priority_queue<ll> pq;
        ll ans = 0;

        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;

            if(x==0 && pq.empty())
            {
                continue;
            }
            else if(x == 0 && !pq.empty())
            {
                ans+=pq.top();
                pq.pop();
            }
            else
            {
                pq.push(x);
            }
        }
        
        cout << ans << endl;
    }
    

    return 0;
}