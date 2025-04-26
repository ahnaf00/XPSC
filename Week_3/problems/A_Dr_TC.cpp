#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while(tc--)
    {
        int n;
        cin >> n;
        
        string s;
        cin >> s;

        vector<string> str(n);
        vector<string> new_str;


        for (int i = 0; i < n; i++)
        {
            str[i] = s;
        }

        for (int i = 0; i < n; i++)
        {
            string str2 = str[i];
            if(str2[i] == '0')
            {
                str2[i] = '1';
                new_str.push_back(str2);
            }
            else if(str2[i] == '1')
            {
                str2[i] = '0';
                new_str.push_back(str2);
            }
        }   
        
        int ones=0;
        for (auto x : new_str)
        {
            ones += count(x.begin(),x.end(),'1');
        }

        cout << ones << endl;
        
    }
    

    return 0;
}