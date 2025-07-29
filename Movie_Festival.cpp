#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<pair<int,int>> m;

    for (int i = 0; i < n; i++)
    {
        int a,b;
        cin >> a >> b;
        m.push_back({a,b});
    }

    sort(m.begin(),m.end());

    int cnt = 1;
    int ending = m[0].second;
    for (int i = 1; i < n; i++)
    {
        if(ending<=m[i].first)
        {
            cnt++;
            ending = m[i].second;
        }
        else
        {
            ending = min(ending,m[i].second);
        }
    }
    
    cout << cnt << endl;

    return 0;
}