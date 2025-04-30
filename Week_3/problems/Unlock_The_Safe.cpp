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

        vector<int> a(n);
        vector<int> b(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        int counter = 0;
        vector<int> p;
        for (int i = 0; i < n; i++)
        {
            int cnt = min(abs(a[i]-b[i]),9-abs(a[i]-b[i]));
            int cnt2 = max(abs(a[i]-b[i]),9-abs(a[i]-b[i]));
            counter+=cnt;
            p.push_back(cnt2-cnt);
        }

        int remain = k-counter;
        int minDiff = INT_MAX;

        for (int i = 0; i < p.size(); i++)
        {
            minDiff = min(minDiff,p[i]);
        }

        if(remain<0)
        {
            cout << "NO" << endl;
        }
        else if(remain%2==0 || minDiff<=remain)
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