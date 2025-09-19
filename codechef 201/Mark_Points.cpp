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

        string s;
        cin >> s;

        bool flag = true;
        int curr = 0;
        for (int i = 0; i < n; i++)
        {
            if(s[i] == '1')
            {
                curr++;
            }
            else
            {
                if( curr >= 1 && curr <= 2 )
                {
                    flag = false;
                }
                curr = 0;
            }
        }
        
        if( 1 <= curr && curr <= 2 )
        {
            flag = false;
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