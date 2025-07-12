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

        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        if(is_sorted(a.begin(),a.end()))
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            cout << 2 << endl;
            for (int i = 0; i < n-1; i++)
            {
                if(a[i]>a[i+1])
                {
                    cout << a[i] << " " << a[i+1] << endl;
                    break;
                }
            }
        }
        
    }
    

    return 0;
}