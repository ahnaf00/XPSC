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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int minval_1 = INT_MAX;
        for (int i = 0; i < n-1; i++)
        {
            int val = a[i]+(a[i+1]/2);
            minval_1 = min(val,minval_1);
        }

        // int minval_2 = INT_MAX;

        
        // for (int i = 0; i < n-1; i++)
        // {
        //     for (int j = i; j < n-1; j++)
        //     {
        //         int val = a[i]+a[j+1];
        //         minval_2 = min(val,minval_2);
        //     }
        // }
        
        // cout << min(minval_1,minval_2) << endl;

        sort(a.begin(),a.end());
        minval_1 = min(minval_1,a[0]+a[1]);

        cout << minval_1 << endl;
    }
    

    return 0;
}