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

        string s;
        cin >> s;

        vector<int>a(n,0);

        bool flag = true;
        for (int i = 1; i < n; i++)
        {
            if(s[i-1] == '1' && (!a[i-1] || !a[i] || !a[i+1]))
            {
                a[i-1] == '1';
                a[i] == '1';
                a[i+1]=='1';
            }
        }

        for (int i = 0; i < n; i++)
        {
            if(s[i] == '1' && a[i] != 1 ||  (s[i] == '0' && a[i] == 1))
            {
                flag = false;
                break;
            }
        }
        
        if(flag)
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