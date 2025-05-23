#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n,k;
        cin >> n >> k;

        vector<int>a(n),h(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> h[i];
        }

        int l = 0, r = 0,ans = 0;
        ll sum = 0;

        while (n > r)
        {
            sum+=a[r];
            if(r+1< n && sum <= k && h[r]%h[r+1]==0)
            {
                ans = max(ans, r-l+1);
                r++;
            }
            else
            {
                if(r+1 < n && h[r]%h[r+1]!=0)
                {
                    if(sum <= k)
                    {
                        ans = max(ans,r-l+1);
                    }
                    l = r+1;
                    r = l;
                    sum = 0;
                }
                else
                {
                    if(sum <= k)
                    {
                        ans = max(ans,r-l+1);
                    }
                    sum-=a[l];
                    l++;
                    r++;
                }
            }
        }
        cout << ans << endl;
        
    }
    

    return 0;
}