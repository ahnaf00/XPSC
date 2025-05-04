#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n,k;
        cin >> n >>k;

        string s;
        cin >> s;

        int l = 0, r = 0;

        int minWhite = INT_MAX;

        int w = 0;
        while (n > r)
        {
            if(s[r] == 'W')
            {
                w++;
            }

            if(r-l+1==k)
            {
                minWhite = min(minWhite,w);
                if(s[l] == 'W')
                {
                    w--;
                }
                l++, r++;    
            }
            else
            {
                r++;
            }
        }
        
        cout << minWhite << endl;
    }
    

    return 0;
}