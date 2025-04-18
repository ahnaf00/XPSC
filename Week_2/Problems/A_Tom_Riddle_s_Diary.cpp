#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    map<string,int> names;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        if(names.count(s) == 0)
        {
            names.insert({s,1});
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }

    }


    return 0;
}