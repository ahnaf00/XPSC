#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r;
    cin >> r;
    vector<vector<int>> v;

    for (int i = 0; i < r; i++)
    {
        int c;
        cin >> c;
        vector<int> a;

        for (int i = 0; i < c; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        v.push_back(a);
    }

    
    for (int i = 0; i < r; i++)
    {
        int ln = v[i].size();
        for (int j = 0; j < ln; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    
    

    return 0;
}