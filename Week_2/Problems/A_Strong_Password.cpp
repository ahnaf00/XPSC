#include <bits/stdc++.h>
using namespace std;

char getChangedChar(char x, char y = '\0')
{
    for (char i = 'a'; i <= 'z'; i++)
    {
        // char ch = 'a'+rand()%26;
        if(i != x && i != y)
        {
            return i;
        }
    }
    
    return 'a';
}

int main()
{
    int tc;
    cin >> tc;

    while(tc--)
    {
        string s;
        cin >> s;
        bool changed = false;

        if(s.size() == 1)
        {
            char ch = getChangedChar(s[0]);
            s.insert(1,1,ch);
            cout << s << endl;
            continue;
        }

        for (int i = 0; i < s.size()-1; i++)
        {
            if(s[i] == s[i+1])
            {
                char ch = getChangedChar(s[i],s[i+1]);
                if(ch!=s[i] && ch != s[i+1])
                {
                    s.insert(i+1,1,ch);
                    cout << s << endl;
                    changed = true;
                    break;
                }
            }
        }

        if(!changed)
        {
            char ch = getChangedChar(s[s.size()-1]);
            // if(ch == s[s.size()-1])
            // {
            //     char ch = getChangedChar(s[s.size()-1]);
            // }
            s.push_back(ch);
            cout << s << endl;
        }
    }   

    return 0;
}