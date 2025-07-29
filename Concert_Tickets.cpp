#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ll n,m;
    cin >> n >> m;

    vector<int>maxPrice(m);
    multiset<int>ms;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        ms.insert(num);
    }

    for (int i = 0; i < m; i++)
    {
        cin >> maxPrice[i];
    }

    vector<ll> ans;

    for (auto x:maxPrice)
    {
        auto it = ms.upper_bound(x);
        if(it == ms.begin())
        {
            cout << -1 << endl;
        }
        else
        {

            cout << *(--it) << endl;
            ms.erase(it);
        }
    }
    

    return 0;
}