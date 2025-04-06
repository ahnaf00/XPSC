#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n,k;
        cin >> n >> k;
        
        string s,s2;
        cin >> s;

        int freq[26] = {0};
        int strLen = s.size();

        for (int i = 0; i < strLen; i++)
        {
            freq[s[i]-'a']++;
        }

        int oddCounter = 0;   

        for (int i = 0; i < 26; i++)
        {
            if(freq[i]%2==1)
            {
                oddCounter++;
            }
        }

        if(k < oddCounter-1)
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