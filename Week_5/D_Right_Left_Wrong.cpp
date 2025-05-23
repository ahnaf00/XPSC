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

        vector<int>v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        string s;
        cin >> s;
        vector<int>pre1(n,0),pre2(n,0);

        int l = 0, r = n-1;
        ll ans = 0;

        while (r > l)
        {
            if(s[l] == 'L' && s[r] == 'R')
            {
                pre1[l] = 1;
                pre2[r] = 1;
                l++;
                r--;
            }
            else
            {
                if(s[l] == 'R')
                {
                    l++;
                }

                if(s[r] == 'L')
                {
                    r--;
                }
            }
        }
        


        for (int i = 1; i < n; i++)
        {
            pre1[i] = pre1[i-1]+pre1[i];
        }

        for (int i = n-2; i >= 0; i--)
        {
            pre2[i] = pre2[i+1]+pre2[i];
        }

        for (int i = 0; i < n; i++)
        {
            ans+=1ll*min(pre1[i],pre2[i])*v[i];
        }
        
        cout << ans << endl;
        

    }
    

    return 0;
}