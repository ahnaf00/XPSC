#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        ll a,b,n,s;
        cin >> a >> b >> n >> s;

        if(s%n<=b && a*n+b>=s)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    

    return 0;
}