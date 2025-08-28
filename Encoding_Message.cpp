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

        if(n%2==1)
        {
            for (int i = 0; i < n-1; i+=2)
            {
                swap(s[i],s[i+1]);
            }
        }else
        {
            for (int i = 0; i < n; i+=2)
            {
                swap(s[i],s[i+1]);
            }
        }

        for (int i = 0; i < n; i++)
        {
            int c = s[i]-'a';
            char ch = 'z'-c;
            cout << ch;
        }

        cout << endl;
    }
    

    return 0;
}