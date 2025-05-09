#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int a,b,c;
        cin >> a >> b >> c;

        int d_a = abs(a-1);
        int d_b = abs(b-c)+abs(c-1);

        if(d_a>d_b)
        {
            cout << 2 << endl;
        }
        else if(d_a<d_b)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 3 << endl;
        }

    }
    

    return 0;
}