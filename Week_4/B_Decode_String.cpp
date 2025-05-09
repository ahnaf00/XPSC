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

        string s,s2="";
        cin >> s;

        for (int i = n-1; i >= 0; i--)
        {
            if(s[i] == '0')
            {
                char c1 = s[i-1];
                char c2 = s[i-2];
                string str1(1,c1); 
                string str2(1,c2); 

                string ss = str2+str1;

                char charVal1 = ((stoi(ss))+96);
                i-=2;
                s2+=charVal1;
            }
            else
            {
                char charVal = ((s[i]-'0')+96);
                s2+=charVal;
            }

        }
        
        reverse(s2.begin(),s2.end());
        cout << s2 << endl;        
    }
    

    return 0;
}