#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n,m;
        cin >> n >> m;

        if(n<m)
        {
            cout << "NO" << endl;
        }
        else
        {
            if((n-m)%2==0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    

    return 0;
}