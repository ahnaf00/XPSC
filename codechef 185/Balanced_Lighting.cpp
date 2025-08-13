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

        map<int,int> mp;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            mp[x]++;
        }


        int diff = abs(mp[1]-mp[2]);
        if(mp[0] >= diff && (mp[0]-diff) % 2 == 0)
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