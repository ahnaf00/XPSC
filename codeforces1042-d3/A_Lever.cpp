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

        int cnt = 0;
        bool flag = false;

        vector<int>a(n);
        vector<int>b(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        
        for (int i = 0; i < n; i++)
        {
            if(a[i]>b[i])
            {
                cnt+=max(0,a[i]-b[i]);
            }
        }
        
        cout << cnt+1 << endl;

    }
    

    return 0;
}