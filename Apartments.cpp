#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,k;
    cin >> n >> m >> k;

    vector<int>clients(n);
    for (int i = 0; i < n; i++)
    {
        cin >> clients[i];
    }

    vector<int>house(m);
    for (int i = 0; i < m; i++)
    {
        cin >> house[i];
    }

    sort(clients.begin(),clients.end());
    sort(house.begin(),house.end());

    int i = 0, j = 0, cnt = 0;

    while (i<n&&j<m)
    {
        if(abs(clients[i]-house[j])<=k)
        {
            cnt++;
            i++;
            j++;
        }
        else if(house[j]<clients[i]-k)
        {
            j++;
        }
        else
        {
            i++;
        }
    }
    cout << cnt << endl;
    


    return 0;
}