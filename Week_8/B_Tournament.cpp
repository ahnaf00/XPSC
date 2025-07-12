#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n, j, k;
        cin >> n >> j >> k;

        vector<int>a(n);

        int idx = -1;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

            if(j == i)
            {
                idx = i;
            }
        }
        idx-=1;

        if(idx<n/2)
        {
            
        }        

    }
    

    return 0;
}