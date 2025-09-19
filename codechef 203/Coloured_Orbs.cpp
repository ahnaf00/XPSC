#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r,b;
    cin >> r >> b;

    int x = min(r,b);

    int ans = x*5;

    if(r>b)
    {
        ans+=abs(r-b)*1;
    }
    else
    {
        ans+=abs(r-b)*2;
    }

    cout << ans << endl;

    return 0;
}