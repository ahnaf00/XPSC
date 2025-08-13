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

        vector<int>a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int curr = a[0],idx = -1;

        for (int i = 1; i < n; i++)
        {
            if(a[i]>curr)
            {
                curr = a[i];
                idx = i+1;
            }
        }
        
        if(idx == -1)
        {
            cout << 1 << endl;
        }        
        else
        {
            cout << idx << endl;
        }
    }
    

    return 0;
}