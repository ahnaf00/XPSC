#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        vector<int>v(5);

        int sum = 0;
        
        for (int i = 0; i < 5; i++)
        {
            cin >> v[i];
            sum+=v[i];
        }

        int ratings= 0;

        if(sum >= 35)
        {
            cout << 0  << endl;
            continue;
        }

        sort(v.begin(),v.end());

        for (int i = 0; i < 5; i++)
        {
            sum+=(10-v[i]);
            ratings+=100;
            if(sum >= 35)
            {
                break;
            }
        }

        cout << ratings << endl;
    }

    return 0;
}