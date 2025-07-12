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

        int cnt = 0, ones = 0, zeros = 0;

        for (int i = 0; i < n; i++)
        {
            if(s[i] == '1')
            {
                ones++;
            }
            else if(s[i] == '0')
            {
                zeros++;
            }

            if(ones == zeros)
            {   
                cnt++;
                ones = 0;
                zeros = 0;
            }
        }

        cout << (1<<cnt) << endl;

    }
    

    return 0;
}