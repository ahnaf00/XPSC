#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{

    string s;
    cin >> s;

    ll dg = s.size();
    int ans = 0;

    ans = (1<<dg)-2;
    int cnt = 0;
    for (int i = dg-1; i >= 0; i--)
    {
        if(s[i] == '7')
        {
            ans += (1<<cnt);
        }
        cnt++;
    }

    cout << ans+1 << endl;
    

    return 0;
}