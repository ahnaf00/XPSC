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
        int maxVal = INT_MIN, minVal = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            maxVal = max(maxVal,a[i]);
            minVal = min(minVal,a[i]);
        }

        cout << maxVal - minVal << endl;
        
    }
    

    return 0;
}