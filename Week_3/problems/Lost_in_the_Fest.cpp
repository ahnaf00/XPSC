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

        int bh = a[n-1];
        int idx = -1;
        
        for (int i = 0; i < n; i++)
        {
            if(a[i] >= bh)
            {
                idx = i;
                break;
            }
        }
        cout << n-1-idx << endl;
        
    }
    

    return 0;
}