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

        for (int i = 0; i < n; i++)
        {
            
            if(s[i]=='0')
            {
                if(i-1>=0 && i+1 < n)
                {    
                    if(s[i-1] != '1' && s[i+1] != '1')
                    {
                        flag = false;
                        break;
                    }
                }
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