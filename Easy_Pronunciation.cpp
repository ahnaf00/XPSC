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

        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {
                cnt = 0;
                continue;
            }
            else
            {
                cnt++;
                if(cnt == 4)
                {
                    break;
                }
            }
        }
        
        if(cnt>=4)
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