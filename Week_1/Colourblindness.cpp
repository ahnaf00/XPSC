#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while(tc--)
    {
        int n;
        cin >> n;

        string s,s2;

        cin >> s;
        cin >> s2;

        bool flag = false;

        for (int i = 0; i < n; i++)
        {
            if(s[i] == s2[i])
            {
                continue;
            }

            if(s[i] == 'G' && s2[i] == 'G' || s[i] == 'B' && s2[i] == 'B')
            {
                continue;
            }

            if(s[i] == 'G' && s2[i] == 'B' || s[i] == 'G' && s2[i] == 'B')
            {
                continue;
            }

            if(s[i] == 'B' && s2[i] == 'G' || s[i] == 'B' && s2[i] == 'G')
            {
                continue;
            }

            if(s[i] != 'G' || s[i] != 'B' || s2[i] != 'G' || s2[i] != 'B')
            {
                if(s[i] != s2[i])
                {
                    flag = true;
                }

            }
        }

        if(flag)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    

    return 0;
}