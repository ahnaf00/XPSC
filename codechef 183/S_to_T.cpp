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

        string s,t;
        cin >> s >> t;

        vector<int>ans;

        if(s[0]!=t[0])
        {
            cout << -1 << endl;
        }
        else
        {
            for (int i = 1; i < n; i++)
            {
                if(s[i] == '0' && s[i-1]=='1')
                {
                    s[i] = '1';
                    ans.push_back(i);
                }
            }

            bool pos = true;

            for (int i = n-1; i > 0; i--)
            {
                if(s[i]!=t[i])
                {
                    if(s[i-1]=='1')
                    {
                        s[i] = t[i];
                        ans.push_back(i);
                    }
                    else
                    {
                        pos = false;
                        break;
                    }
                }
            }
            
            if(!pos)
            {
                cout << -1 << endl;
            }
            else
            {
                cout << ans.size() << endl;
                for(auto x : ans)
                {
                    cout << x << " ";
                }
                cout << endl;
            }
            
        }
    }
    

    return 0;
}