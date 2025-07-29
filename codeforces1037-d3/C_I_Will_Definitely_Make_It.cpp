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

        vector<int>a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        bool flag = false;
        for (int i = 0; i < n-1; i++)
        {
            if(a[i]<a[i+1])
            {
                flag = true;
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