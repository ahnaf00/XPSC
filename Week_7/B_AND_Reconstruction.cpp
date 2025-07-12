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

        vector<int> b(n-1);
        for (int i = 0; i < n-1; i++)
        {
            cin >> b[i];
        }
        vector<int> a(n);

        a[0] = b[0] | 0;

        for (int i = 1; i < n-1; i++)
        {
            a[i] = b[i-1]|b[i];
        }
        a[n-1] = b[n-2]|0;

        bool flag = true;
        for (int i = 0; i < n-1; i++)
        {
            if((a[i]&a[i+1])!=b[i])
            {
                flag = false;
                break;
            }
        }
        
        if(flag)
        {    
            for (int i = 0; i < n; i++)
            {
                cout << a[i] << " ";
            }
            
            cout << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    

    return 0;
}