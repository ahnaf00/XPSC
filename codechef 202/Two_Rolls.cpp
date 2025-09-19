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

        int val = 50-x;

        if(2*y <= val && val <= 2*(y+5))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
       
    }
    

    return 0;
}