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

        int b = n;

        int minVal = INT_MAX;
        for (int i = 0; i < b; i++)
        {
            if(n == 3 || n == 1)
            {
                minVal = n;
                break;
            }

            if(n>3)
            {
                n-=3;
                minVal = min(minVal,n);
                continue;
            }

            if(n%2==0)
            {
                n/=2;
                minVal = min(minVal,n);
            }
        }

        cout << minVal << endl;
    }
    

    return 0;
}