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

        vector<int>a(n);
        unordered_map<int,int>mp;
        int one = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
            if(a[i]!=1)
            {
                one++;
            }
        }
        
        int minTime = one;
        for(auto [key,val]:mp)
        {
            int m = n-val;
            int t = 1+m;
            if(t<minTime)
            {
                minTime = t;
            }
        }

        cout << minTime << endl;
        
        
    }
    

    return 0;
}