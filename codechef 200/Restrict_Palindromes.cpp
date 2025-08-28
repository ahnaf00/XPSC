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

        string s = "abcde",res="";
        
        for (int i = 0; i < n; i++)
        {
            res+=s[i%5];
        }
        cout << res << endl;
    }
    

    return 0;
}