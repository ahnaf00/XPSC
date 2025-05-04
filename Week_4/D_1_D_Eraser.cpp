#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        int l = 0, b = 0;

        while (l < n)
        {
            if(s[l] == 'B')
            {
                b++;
                l+=k;
            }
            else
            {
                l++;
            }
        }
        cout << b << endl;
        
    }
    

    return 0;
}