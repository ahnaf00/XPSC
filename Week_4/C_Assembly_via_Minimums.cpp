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

        int m = n*(n-1)/2;

        vector<int> b(m);
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }

        sort(b.begin(),b.end());

        for (int i = 0; i < m; i+=--n)
        {
            cout << b[i] << " ";
        }

        cout << 1000000000 << endl;
        
        
    }
    

    return 0;
}