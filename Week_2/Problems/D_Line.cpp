#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    int tc;
    cin >> tc;

    while(tc--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;
        vector<ll> change(n),gain;

        for (int i = 0; i < n; i++)
        {
            if(s[i] == 'L')
            {
                change[i] = i;
            }
            else if(s[i]=='R')
            {
                change[i] = n-i-1;
            }
        }

        ll sum=0;
        for (auto x : change)
        {
            sum+=x;
        }
        
        for (int i = 0; i < n; i++)
        {
            if(s[i] == 'L')
            {
                ll val = n-i-1-change[i];
                if(val>=0)
                {
                    gain.push_back(val);
                }
            }
            else if(s[i] == 'R')
            {
                ll val = i-change[i];
                if(val>=0)
                {
                    gain.push_back(val);
                }
            }
        }

        sort(gain.begin(),gain.end(),greater<int>());

        for(auto x : gain)
        {
            sum+=x;
            cout << sum << " ";
        }

        for (int i = 0; i < n-gain.size(); i++)
        {
            cout << sum << " ";
        }
    }
    

    return 0;
}