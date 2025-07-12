#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int odd, even;
        cin >> odd >> even;

        int num = 0;

        if(odd == 0)
        {
            cout << "NO" << endl;
            continue;
        }

        if(even%odd == 0)
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