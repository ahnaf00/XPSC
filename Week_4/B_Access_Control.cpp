#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n,x;
        cin >> n >> x;

        string s;
        cin >> s;

        int swp = 0;
        bool isValid = true;

        for (int i = 0; i < n; i++)
        {
           if(s[i] == '1')
           {    
                swp = x;
           }
           else if(s[i] == '0')
           {
                if(swp>0)
                {
                    swp--;
                }
                else
                {
                    isValid = false;
                    break;
                }
           }
        }

        if(isValid)
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