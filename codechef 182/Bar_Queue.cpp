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
        
        int b = 0, g = 0, ans = 0;
        for (int i = 0; i < n; i++)
        {
            if(s[i] == 'B')
            {
                b++;
            }

            if(s[i] == 'G')
            {
                g++;
            }

            if(b>2*g)
            {
                ans = b+g;
                break;
            }
            else
            {
                ans = g+b;
            }
        }
        
        cout << ans << endl;
        

    }
    

    return 0;
}