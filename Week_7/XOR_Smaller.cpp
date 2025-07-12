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

        vector<int>arr(n);

        
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        
        int res = arr[0];
        for (int i = 0; i < n; i++)
        {
            res&=arr[i];
        }

        cout << res << endl;
        
        
    }
    

    return 0;
}