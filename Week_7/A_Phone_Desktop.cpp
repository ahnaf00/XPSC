#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int x,y;
        cin >> x >> y;

        int res = (y+1)/2;

        int remain = (res*15) - (y*4);

        if(x == 0 && y == 0)
        {
            cout << 0 << endl;
        }
        else if(x!=0 && y==0)
        {
            if(x%15==0)
            {
                cout << x/15 << endl;
            }
            else
            {
                cout << (x/15)+1 << endl;
            }
        }
        else if(x==0 && y!=0)
        {
            if(y%2==0)
            {
                cout << y/2 << endl;
            }
            else
            {
                cout << (y/2)+1 << endl;
            }
        }
        else if(x!=0 && y!=0)
        {
            if(remain>=x)
            {
                cout << res << endl;
            }
            else
            {
                cout << res + (x-remain+14)/15 << endl;
            }
        }
    }
    

    return 0;
}