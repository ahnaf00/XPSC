#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin >> n >>m;

    vector<int> a(n);
    vector<int> b(m);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    int l = 0, r = 0;
    vector<long long> res;

    while (l < n && r < m)
    {
        if(a[l] <= b[r])
        {
            res.push_back(a[l]);
            l++;
        }
        else
        {
            res.push_back(b[r]);
            r++;
        }
    }

    while (l < n)
    {
        res.push_back(a[l]);
        l++;
    }

    while (r < m)
    {
        res.push_back(b[r]);
        r++;
    }

    for(auto x : res)
    {
        cout << x << " ";
    }
    

    return 0;
}