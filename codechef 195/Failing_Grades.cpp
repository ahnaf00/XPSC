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

        vector<int> a(n+1);

        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        
        int sum = 0;
        bool flag = true;
        for (int i = 1; i <= n; i++)
        {
            sum+=a[i];
            if((sum/i) < 40)
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