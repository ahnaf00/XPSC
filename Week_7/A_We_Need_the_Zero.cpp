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

        vector<int> arr(n);

        int res = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            res^=arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            arr[i]^=res;
        }

        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans^=arr[i];
        }
        
        
        if(ans==0)
        {
            cout << res << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    

    return 0;
}