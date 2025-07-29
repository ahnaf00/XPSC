#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n,x;
        cin >> n >> x;

        vector<int>a(n);
        double sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum+=a[i];
        }

        if(sum<x)
        {
            cout << 1 << endl;
        }
        else
        {
            double ans = sum/x;
            cout << ceil(ans) << endl;
        }
        
        
    }
    

    return 0;
}