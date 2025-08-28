#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ll n,x,y,num;
    cin >> n >> x >> y >> num;
    
    vector<ll> a(n+1,0);
    ll i = 1;
    while (num>0)
    {
        a[i] = num%10;
        num/=10;
        i++;
    }
    reverse(a.begin(),a.end());
    if(num == 0)
    {
        cout << "NO" << endl;
    }
    else if(a[y]%a[x] == 0 || a[x]%a[y] == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    
    return 0;
}