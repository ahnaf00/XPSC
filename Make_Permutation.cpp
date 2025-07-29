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

        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(),a.end());

        bool flag = true;
        
        for (int i = 1; i <= n; i++)
        {
            if(a[i]<=i)
            {
                continue;
            }
            else
            {
                flag = false;
                break;
            }
        }
        
        if(flag)
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