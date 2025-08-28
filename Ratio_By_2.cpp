#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int a, b;
        cin >> a >> b;

        if(a>=2*b || b >= 2*a)
        {
            cout << 0 << endl;
        }
        else
        {
            int cnt = 0;
            while (a < 2*b && b < 2*a)
            {
                if(a>b)
                {
                    b--;
                }
                else
                {
                    a--;
                }
                cnt++;
            }
            cout << cnt << endl;
        }
    }
    

    return 0;
}