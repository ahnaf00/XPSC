#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        ll x, y;
        cin >> x >> y;

        ll cnt = 0;

        if((x%2==0 && y%2==0 || x%y == 0 || y%x==0) && x!=1 && y!=1)
        {
            cout << 0 << endl;
        }
        else if(x%2==0 && y%2==1)
        {
            while (y%2!=0)
            {
                y++;
                cnt++;
            }
            cout << cnt << endl;
        }
        else if(x%2==1 && y%2==0)
        {
            while (x%2!=0)
            {
                x++;
                cnt++;
            }
            cout << cnt << endl;
        }
        else
        {
            while (x%2!=0 && y%2!=0)
            {
                x++;
                y++;
                cnt+=2;
                if(x%y == 0 || y%x==0)
                {
                    cout << cnt << endl;
                    break;
                }
            }
            
            // while (y%2!=0)
            // {
            //     y++;
            //     cnt++;
            // }

            // cout << cnt << endl;
            
        }

    }
    

    return 0;
}