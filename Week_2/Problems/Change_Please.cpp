#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while(tc--)
    {
        int n;
        cin >> n;

        int remain = 100-n;
        int x = remain/10;
        int ans = x*10;

        cout << ans << endl;
    }

    return 0;
}