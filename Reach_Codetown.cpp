#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        string s, s2 = "CODETOWN";
        cin >> s;

        int ln = s.size();

        set<char>ss = {'A','E','I','O','U'};
        bool flag = true;
        for (int i = 0; i < ln; i++)
        {
            if(ss.count(s[i]) && ss.count(s2[i]) || !ss.count(s[i]) && !ss.count(s2[i]))
            {
                continue;
            }
            else
            {
                flag = false;
                break;
            }
        }
        
        if(flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

    }
    

    return 0;
}