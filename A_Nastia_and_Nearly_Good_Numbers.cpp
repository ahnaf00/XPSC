#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{

    int tc;
    cin >> tc;

    while (tc--)
    {
        ll a,b;
        cin >> a >> b;

        if(b == 1)
        {
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;
        cout << a << " " << (a*b) << " " << a+(a*b) << endl;
    }
    

    return 0;
}