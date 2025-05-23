#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n,s;
        cin >> n >> s;

        vector<int>v(n);

        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum+=v[i];
        }

        int l = 0, r = 0, op = 0; 
        int ans = INT_MIN, ss = 0;
        
        if(sum<s)
        {
            cout << -1 << endl;
        }
        else
        {
            while (n > r)
            {
                ss+=v[r];
                if(ss == s)
                {
                    ans = max(ans,r-l+1);
                }
                else
                {
                    while (ss>s)
                    {
                        if(ss<=s)
                        {
                            break;
                        }
                        ss-=v[l];
                        l++;
                    }
                }
                r++;
            }
            cout << n-ans << endl;
        }

        
    }
    

    return 0;
}