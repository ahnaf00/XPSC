#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<pair<int,int>>a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i+1;
    }

    sort(a.begin(),a.end());

    int cnt = 1,temp = -1;
    for (int i = 0; i < n; i++)
    {
        if(a[i].second < temp)
        {
            cnt++;
        }
        temp = a[i].second;
    }

    cout << cnt << endl;
    
    

    return 0;
}