#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n,k,d;
        cin >> n >> k >> d;

        vector<int>a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(),a.end());
        
        int cnt = 0;
        for (int i = 0; i < n-k; i++)
        {
            cnt+=((d-1)/a[i])+1;
        }

        cout << cnt << endl;
        
    }
    

    return 0;
}