#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;

        int maxGCD = INT_MIN;

        for (int i = 1; i < n; i++)
        {
            maxGCD = max(maxGCD,__gcd(i,i+1));
        }
        
        cout << maxGCD << endl;
    }
    

    return 0;
}