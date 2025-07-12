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

        string s,s2 = "";
        cin >> s;

        int zeros = 0, ones = 0,zeroCnt = 0;
        for (int i = 0; i < n; i++)
        {
            if(s[i] == '1')
            {
                s2+='1';
                ones++;
                zeros = 0;
            }
            else if(zeros == 0)
            {
                s2+='0';
                zeroCnt++;
                zeros++;
            }
        }
        
        if(ones>zeroCnt)
        {
            cout << "YES" << endl; 
        }
        else if(zeroCnt > ones || ones == zeroCnt)
        {
            cout << "NO" << endl;
        }
    }
    

    return 0;
}