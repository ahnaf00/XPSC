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

        vector<int>a(n),mods(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mods[i] = a[i]%2;
        }

        int cnt = 1;
        for (int i = 1; i < n; i++)
        {
            if(mods[i]!=mods[i-1])
            {
                cnt++;
            }
        }
        
        cout << cnt << endl;

    }
    

    return 0;
}