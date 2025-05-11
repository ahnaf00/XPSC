#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n,m,l,r;
        cin >> n >> m >> l >> r;

        int l_p = 0;
        int r_p = 0;

        for (int i = 0; i < m; i++)
        {
            if(l_p-1>=l)
            {
                l_p--;
            }
            else if(r_p < r)
            {
                r_p++;
            }
        }

        cout << l_p << " " << r_p << endl;

        
    }
    

    return 0;
}