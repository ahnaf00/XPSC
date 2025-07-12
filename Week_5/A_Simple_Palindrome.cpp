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

        string s = "aeiou",s2="";
        int vowels = n/5;
        int remain = n%5;

        while (vowels--)
        {
            s2+=s;
        }

        for (int i = 0; i < remain; i++)
        {
            s2+=s[i];
        }

        sort(s2.begin(),s2.end());
        
        cout << s2 << endl;
        
        
    }
    

    return 0;
}