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

        vector<int>freq(26,0);
        for (int i = 0; i < n; i++)
        {
            freq[s[i]-'a']++;
        }

        bool flag = false;
        for (int i = 1; i < n-1; i++)
        {
            if(freq[s[i]-'a']>1)
            {
                flag = true;
                break;
            }
        }

        if(flag)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
        
        
        
        
    }
    

    return 0;
}