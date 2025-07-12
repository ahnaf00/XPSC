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

        vector<string> arr;
        string str(k,'0'),s2;
        s2 = str;

        map<string,int>mp;

        for (int i = 0; i < k; i++)
        {
           str[i] = '1';
           arr.push_back(str);
           str = s2;
        }

        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;

            mp[s]++;
        }
        

        
        bool flag = true;
        for (int i = 0; i < k; i++)
        {
            if(mp.find(arr[i]) == mp.end())
            {
                flag = false;
                break;
            }
        }



        if(flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    

    return 0;
}