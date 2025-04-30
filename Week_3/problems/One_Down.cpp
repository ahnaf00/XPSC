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

        string s,s2;
        cin >> s >> s2;

        map<char,int> ss;
        map<char,int> ss2;  

        if(s.size() != s2.size())
        {
            cout << "NO" << endl;
            continue;
        }

        for (int i = 0; i < n; i++)
        {
            ss[s[i]]++;
            ss2[s2[i]]++;
        }
    }
    

    return 0;
}