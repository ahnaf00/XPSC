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

        vector<ll> a;

        for (int i = __lg(n); i >= 0; i--)
        {
            if((n>>i)&1)
            {
                if(n-(1LL<<i) != 0)
                {
                    a.push_back(n-(1LL<<i));
                }
            }
        }
        a.push_back(n);

        cout << a.size() << endl;
        for (auto x : a)
        {
            cout << x << " ";
        }

        cout << endl;
    }
    
    

    return 0;
}