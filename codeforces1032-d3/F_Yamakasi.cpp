#include <bits/stdc++.h>
using namespace std;

int n,s,x;

int subsegments(vector<int>subArrays)
{
    if(subArrays.size() == 0)
    {
        return 0;
    }
    
    int ln = subArrays.size();
    vector<int> pref(ln+1);
    pref[0] = 0;
    for (int i = 1; i < ln; i++)
    {
        pref[i+1] = pref[i]+subArrays[i];
    }

    map<int,int>mp;
    mp[0]++;
    int ans = 0;
    for (int i = 1; i <= ln; i++)
    {   
        ans+=mp[pref[i]-s];
        mp[pref[i]]++;
    }
    
    return ans;
}

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        cin >> n >> s >> x;
        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        
        vector<int> subArrays;
        int res = 0;
        for (int i = 0; i < n; i++)
        {
            if(a[i]>x)
            {
                res+=subsegments(subArrays);
                subArrays.clear();
            }
            else
            {
                subArrays.push_back(a[i]);
            }
        }
        res+=subsegments(subArrays);
        subArrays.clear();

        for (int i = 0; i < n; i++)
        {
            if(a[i]>=x)
            {
                res-=subsegments(subArrays);
                subArrays.clear();
            }
            else
            {
                subArrays.push_back(a[i]);
            }
        }
        res-=subsegments(subArrays);

        cout << res << endl;
        
    }
    

    return 0;
}