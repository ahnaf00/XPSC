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

        vector<int>a(n);
        int maxval = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            maxval = max(maxval,a[i]);
        }

        int p = 0,maxp = INT_MIN;
        for (int i = 1; i <= maxval; i++)
        {
            for (int j = 0; j < n; j++)
            {
                p+=50*min(i,a[j])-30*i;
            }
            maxp = max(maxp,p);
        }
        
        cout << maxp << endl;

    }
    

    return 0;
}