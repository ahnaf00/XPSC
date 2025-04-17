#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while(tc--)
    {
        string p,s;
        cin >> p >> s;

        int ls=0,rs=0;

        for (int i = 0; i < p.size(); i++)
        {
            if(p[i] == 'L')
            {
                ls++;
            }
            else if(p[i] == 'R')
            {
                rs++;
            }
        }

        int s_ls=0,s_rs=0;
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i] == 'L')
            {
                s_ls++;
            }
            else if(s[i] == 'R')
            {
                s_rs++;
            }
        }

        // if(s_ls >= ls && s_rs >= rs )
        // {
        //     if( 2*ls>=s_ls && 2*rs>=s_rs)
        //     {
        //         cout << "YES" << endl;
        //     }
        //     else
        //     {
        //         cout << "NO" << endl;
        //     }
        // }
        // else
        // {
        //     cout << "NO" << endl;
        // }

        cout << ls <<  " " << rs << " " << s_ls << " " << s_rs;

    }

    return 0;
}