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
        vector<int>a(n),b;
        map<int,int> mp;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }

        for(auto [key,value]:mp)
        {
            if(value>=k)
            {
                b.push_back(key);
            }
        }

        sort(b.begin(),b.end());
        
        if(b.empty())
        {
            cout << -1 << endl;
            continue;
        }

        int l = 0 , r = 0, mnxln = 1;
        int ln = b.size();
        int ls = b[0],rs = b[0];

        
        
        while (r+1<ln)
        {
            if(b[r]+1 == b[r+1])
            {
                r++;
            }
            else
            {
                if(r-l+1>mnxln)
                {
                    mnxln = r-l+1;
                    ls = b[l];
                    rs = b[r];
                }
                r++;
                l = r;
            }
        }
        
        if(r-l+1>mnxln)
        {
            ls = b[l];
            rs = b[r];
        }

        cout << ls << " " << rs << endl;
    }
    

    return 0;
}