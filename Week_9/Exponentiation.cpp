#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9+7;

int power(int a, int b)
{
    int ans = 1%MOD;
    while (b)
    {
        if(b&1)
        {
            ans = (1LL * ans%MOD * a%MOD) % MOD;
        }
        a = 1LL * a*a%MOD; 
        // b>>=1;
        b/=2;
    }
    return ans;
}

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int a, b;
        cin >> a >> b;

        cout << power(a,b) << endl;
    }
    

    return 0;
}