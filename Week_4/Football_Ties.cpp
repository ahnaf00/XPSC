#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int x, y;
        cin >> x >> y;

        if(x%3 == 1 && y%3 == 1)
        {
            cout << 1 << endl;
        }
        else if(x%3 == 0 && y%3 == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << x%3 << endl;
        }
    }
    

    return 0;
}