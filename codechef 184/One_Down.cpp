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

        int zeroOne = 0, oneZero = 0; 

        for (int i = 0; i < n; i++)
        {
            if(s[i] == '0' && t[i] == '1')
            {
                zeroOne++;
            }

            if(s[i] == '1' && t[i] == '0')
            {
                oneZero++;
            }
        }

        if(oneZero%2==1 || zeroOne>0)
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