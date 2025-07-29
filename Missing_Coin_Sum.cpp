#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

int main()
{
    ll n;
    cin >> n;

    vector<ll>a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(),a.end());

    ll sum = 1;

    for (int i = 1; i <= n; i++)
    {
        if(a[i-1]>sum)
        {
            break;
        }
        else
        {
            sum+=a[i-1];
        }
    }
    
    cout << sum << endl;
    

    return 0;
}