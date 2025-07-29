#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n,k;
        cin >> n >> k;

        vector<int>v(n);
        int ors = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            ors|=v[i];
        }

        bool flag = false;
        for (int i = 0; i <= k ; i++)
        {
            if((ors|i)==k)
            {
                cout << i << endl;
                flag = true;
                break;
            }
        }
        
        if(!flag)
        {
            cout << -1 << endl;
        }
    }
    

    return 0;
}