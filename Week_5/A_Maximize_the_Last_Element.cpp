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

        int arr[n+1];

        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }

        int ans = INT_MIN;

        for (int i = 1; i <= n; i++)
        {
            if(i%2==1)
            {
                ans = max(ans,arr[i]);
            }
        }
        
        cout << ans << endl;
        
    }
    

    return 0;
}