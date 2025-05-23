#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n,k;
        cin >> n >> k;

        vector<int> a(k);

        for (int i = 0; i < k; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(),a.end());

        int ans = 0;

        for (int i = 0; i < k-1; i++)
        {
            if(a[i]!=1)
            {
                ans+=a[i]+a[i]-1;
            }
            else
            {
                ans++;
            }
        }

        cout << ans << endl; 
        
    }
    

    return 0;
}