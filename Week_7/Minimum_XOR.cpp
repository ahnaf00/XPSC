#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);
        ll result = 0;
        
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            result = result^arr[i];
        }

        if(result == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            int ans = result;
            for (int i = 0; i < n; i++)
            {
                int num = result^arr[i];
                ans = min(ans,num);
            }
            cout << ans << endl;
        }
    }
    

    return 0;
}