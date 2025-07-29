#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int d,x,y;
        cin >> d >> x >> y;

        if(x <= y)
        {
            cout << 0 << endl;
            continue;
        }

        int cnt = 0;

        while (true)
        {
            y--;
            cnt++;

            if((x*(100-d*cnt))<=y*100)
            {
                cout << cnt << endl;
                break;
            }

            if(y==0 && (x*(100-d*cnt))>(y*100))
            {
                cout << -1 << endl;
                break;
            }
        }
    }
    

    return 0;
}