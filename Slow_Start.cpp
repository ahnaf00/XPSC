#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int x,h;
        cin >> x >> h;

        int cnt = 0;
        for (int i = 0; i < 5; i++)
        {
            if(h>(x/2))
            {
                h-=x/2;
                cnt++;
            }
        }

        if(h>0)
        {
            while (h>0)
            {
                h-=x;
                cnt++;
                if(h<0)
                {
                    break;
                }
            }
            cout << cnt << endl;
        }
        else
        {
            cout << cnt << endl;
        }
    }
    

    return 0;
}
