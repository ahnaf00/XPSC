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
        map<int,int> mp;

        int maxval = INT_MIN, minValue = INT_MAX;
        bool pos = false, neg = false;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

            if(a[i] < 0)
            {
                minValue = min(minValue,a[i]);
            }
            maxval = max(maxval,a[i]);

            if(a[i]>0)
            {
                pos = true;
            }

            if(a[i]<0)
            {
                neg = true;
            }
        }

        if(pos)
        {
            cout << maxval << " " << maxval << endl;
        }
        else if(neg)
        {
            cout << minValue << " " << minValue << endl;
        }
        else
        {
            cout << -1 << endl;
        }        
    }
    

    return 0;
}