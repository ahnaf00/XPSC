#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int ln = s.size();
    vector<int>a;
    int cnt = 0;
    for (int i = 0; i < ln; i++)
    {
        if(s[i] == '#')
        {
            a.push_back(i+1);
        }
    }

    for (int i = 0; i < a.size(); i+=2)
    {
        cout << a[i] << "," << a[i+1] << endl;
    }
    

    return 0;
}