#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        string s;
        cin >> s;

        int ln = s.size();
        stack<int> cp,sm;

        for (int i = 0; i < s.size(); i++)
        {
            if(s[i] >= 'A' && s[i] <= 'Z' && s[i]!= 'B')
            {
                cp.push(i);
            }
            
            if (s[i] >= 'a' && s[i] <= 'z' && s[i] != 'b')
            {
                sm.push(i);
            }

            if(s[i] == 'B' && !cp.empty())
            {
                s[cp.top()] = '1';
                cp.pop();
            }

            if(s[i]=='b' && !sm.empty())
            {
                s[sm.top()] = '1';
                sm.pop();
            }
        }

        for (int i = 0; i < s.size(); i++)
        {
            if(s[i]!='B' && s[i]!='b' && s[i]!='1')
            {
                cout << s[i];
            }
        }
        
        cout << endl;
    }
    


    return 0;
}