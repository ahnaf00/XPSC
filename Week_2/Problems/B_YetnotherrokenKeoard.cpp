#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    int tc;
    cin >> tc;
    while (tc--)
    {
        string s,s2;
        cin >> s;
    
        for(auto c : s)
        {
            if(c == 'B')
            {
                int ln = s2.size();
                for (int i = ln-1; i >= 0; i--)
                {
                    if(s2[i] >= 'A' && s2[i] <= 'Z')
                    {
                        s2.erase(s2.begin()+i);
                        break;
                    }
                }
            }
            else if(c == 'b')
            {
                int ln = s2.size();
                for (int i = ln-1; i >= 0; i--)
                {
                    if(s2[i] >= 'a' && s2[i] <= 'z')
                    {
                        s2.erase(s2.begin()+i);
                        break;
                    }
                }
            }
    
            if(c == 'B' || c == 'b') continue;
            s2+=c;
        }
    
        cout << s2 << endl;
    }
    

    return 0;
}