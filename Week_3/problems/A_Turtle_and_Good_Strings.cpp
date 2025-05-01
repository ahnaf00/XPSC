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

        if(n < 2)
        {
            cout << "NO" << endl;
            continue;
        }

        string s;

        for (int i = 0; i < n; i++)
        {
            char c;
            cin >> c;
            s.push_back(c);
        }
        if(s[0] == s[n-1])
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
        
    }
    

    return 0;
}