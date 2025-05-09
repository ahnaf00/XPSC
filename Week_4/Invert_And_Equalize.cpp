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

        for (int i = 1; i < n; i++)
        {
            if(s[i]!=s[i-1])
            {
                cnt++;
            }
        }
        
        cout << (cnt+1)/2 << endl;
    }
    

    return 0;
}