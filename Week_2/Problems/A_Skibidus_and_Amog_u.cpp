#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        string s;
        cin >> s;

        s.pop_back();
        s.pop_back();

        cout << s+"i" << endl;
    }
    
    return 0;
}