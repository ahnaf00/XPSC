#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while(tc--)
    {
        string s,s2;
        cin >> s;
    
        char prev,next;
        int pos;
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i+1] >= 'A' && s[i+1] <= 'Z')
            {
                next = s[i+1]; 
            }
    
            if(s[i] == next)
            {
                pos = i;
                break;
            }
        }
        
        char ch = s[pos]++;
        if(ch >= 'A' && ch <= 'Z')
        {
            s.insert(pos,1,ch);
        }
        
        cout << s << endl;
        
    }


    

    return 0;
}