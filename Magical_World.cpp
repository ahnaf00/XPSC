#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int a,b,x;
        cin >> a >> b >> x;

        int sqr = x*x, rec = a*b;

        if(rec<=sqr)
        {
            cout << 0 << endl;
        }
        else
        {
            if(a<=sqr || b<= sqr)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 2 << endl;
            }
        }
    }
    

    return 0;
}