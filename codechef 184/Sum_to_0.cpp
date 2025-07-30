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

        vector<int> v;

        if(n == 1)
        {
            cout << -1 << endl;
            continue;
        }

        if(n%2 == 0)
        {
            for (int i = 0; i < n/2; i++)
            {
                v.push_back(1);
                v.push_back(-1);
            }
        }
        else
        {
            for (int i = 0; i < (n-3)/2; ++i)
            {
                v.push_back(1);
                v.push_back(-1);
            }
            v.push_back(1);
            v.push_back(2);
            v.push_back(-3);
        }

        for (auto x : v)
        {
            cout << x << " ";
        }
        cout << endl;
        
    }
    

    return 0;
}