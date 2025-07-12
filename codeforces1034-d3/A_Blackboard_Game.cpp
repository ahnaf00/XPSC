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

        map<int,int>mp;

        for (int i = 0; i < n; i++)
        {
            if(i%4 == 0)
            {
                mp[0]++;
            }
            else if(i%4 == 1)
            {
                mp[1]++;
            }
            else if(i%4 == 2)
            {
                mp[2]++;
            }
            else if(i%4 == 3)
            {
                mp[3]++;
            }
        }
        
        int pairs = min(mp[0],mp[3])+min(mp[1],mp[2]);

        if(abs(n-(2*pairs))%4==0)
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Alice" << endl;
        }
    }
    

    return 0;
}