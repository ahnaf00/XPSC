#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        string s,s1="",s2="";
        cin >> s;

        s1+=s[0];
        s1+=s[1];

        s2+=s[2];
        s2+=s[3];

        int a,b,c;

        a = stoi(s1);
        b = stoi(s2);

        c = stoi(s);

        int root = sqrt(c);

        if(root*root != c)
        {
            cout << -1 << endl;
            continue;
        }
        
        int d = root/100;
        int e = root%100;

        if((d+e)*(d+e) == c)
        {
            cout << e << " " << d << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    

    return 0;
}