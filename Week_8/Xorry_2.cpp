#include <bits/stdc++.h>
using namespace std;

bool ith_bit_on(int n, int i)
{
    return ((n>>i)&1);
}

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;
        
        int msb = __lg(n), B = (1<<msb), A = (n^B), sum = B, cnt = 0;
        for (int i = 0; i <= msb; i++)
        {
            if(!ith_bit_on(A,i) && !ith_bit_on(B,i) && (sum+(1<<i))<=n)
            {
                cnt++;
                sum+=(1<<i);
            }
        }
        int ans = (1<<cnt);

        cout << ans << endl;
    }
    

    return 0;
}