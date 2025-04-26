#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;

    vector<int> arr(n+1);

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i <= m ; i++)
    {
        int pos;
        cin >> pos;
        set<int> s;
        for (int j = pos; j <= n; j++)
        {
            s.insert(arr[j]);
        }
        cout << s.size() << endl;
    }
    
    return 0;
}