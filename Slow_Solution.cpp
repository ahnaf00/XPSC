#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int maxT, maxN, sumN;
        cin >> maxT >> maxN >> sumN;

        int ans = 0, n = INT_MAX;
        while (maxT > 0 && sumN>0)
        {
            n = min(sumN,maxN);
            ans += (n*n);
            maxT--;
            sumN-=n;
        }

        cout << ans << endl; 
    }
    

    return 0;
}