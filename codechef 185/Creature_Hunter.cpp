#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int>p1,pair<int,int>p2)
{
    double val1 = (double)p1.second/p1.first;
    double val2 = (double)p2.second/p2.first;

    return val1>val2;
}

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n,h;
        cin >> n >> h;

        vector<pair<int,int>>a(n);

        for (int i = 0; i < n; i++)
        {
            int time, damage;
            cin >> time >> damage;

            a[i] = {time,damage};
        }

        sort(a.begin(),a.end(),cmp);

        int ans = 0;

        int hitcnt = h/a[0].second;
        h-=hitcnt*a[0].second;
        ans+=hitcnt*a[0].first;

        if(h>0)
        {
            int minVal = INT_MAX;
            for (int i = 0; i < n; i++)
            {
                // int cnt = ceil(h/a[i].second);
                int cnt = (h+a[i].second-1)/a[i].second;
                int totalTime = cnt*a[i].first;
                minVal = min(minVal,totalTime);
            }

            ans+=minVal;
            
        }
        cout << ans << endl;
        
    }
    

    return 0;
}