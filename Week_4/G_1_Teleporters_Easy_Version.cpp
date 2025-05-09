#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n,c;
        cin >>  n >> c;

        vector<ll> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >>  v[i];
            v[i]+=i+1;
        }      
        
        sort(v.begin(),v.end());

        ll ans = 0;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if(ans+v[i] > c)
            {
                break;
            }   
            ans+=v[i];
            cnt++;
        }
        cout << cnt << endl;

    }
    

    return 0;
}