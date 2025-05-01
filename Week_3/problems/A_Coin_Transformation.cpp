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
        
        if(n == 1)
        {
            cout << n << endl;
            continue;
        }
        
        ll cnt = 1;
        while (n>3)
        {
            n/=4;
            cnt*=2;
        }
        cout << cnt << endl;
    }
    

    return 0;
}