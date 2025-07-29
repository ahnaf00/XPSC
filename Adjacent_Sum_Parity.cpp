#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;

        vector<int>a(n+1);
        int sum = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            sum+=a[i];
        }

        if(sum%2 == 0)
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