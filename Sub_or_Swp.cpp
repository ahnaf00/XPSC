#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int x,y;
        cin >> x >> y;

        cout << __gcd(x,y) << endl;
    }
    

    return 0;
}