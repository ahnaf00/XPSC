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
    
        vector<int> a(n);
    
        map<int,int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
    
        int m;
        cin >> m;
    
        for (int q = 0; q < m; q++)
        {
            string s;
            cin >> s;
    
            if(s.size() != n)
            {
                cout << "NO" << endl;
                continue;
            }
    
            map<char,vector<int>> mp_s;
    
            int ln = s.size();
            for (int i = 0; i < ln; i++)
            {
                mp_s[s[i]].push_back(i);
            }
    
            bool ok = true;
            for(auto [key,value]:mp_s)
            {
                int val = a[value[0]];
                if(value.size() != mp[val])
                {
                    ok = false;
                    break; 
                }
    
                
                for (int i = 1; i < value.size(); i++)
                {
                    if(val != a[value[i]])
                    {
                        ok = false;
                        break;
                    }
                }
            }
    
            if(ok)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    

    return 0;
}