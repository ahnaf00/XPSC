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

        bool flag = false;
        for (int i = 0; i < n-1; i++)
        {
            if(a[i]>a[i+1])
            {
                flag = true;
                cout << i+1 << " " << i+2 << endl;
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