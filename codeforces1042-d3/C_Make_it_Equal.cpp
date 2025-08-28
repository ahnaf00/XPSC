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

        map<int,int>mp;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;

            mp[num%k]++;
            mp[k-num%k]++;
        }

        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;

            mp[num%k]--;
            mp[k-num%k]--;
        }

        bool flag = true;
        for(auto [key,val]:mp)
        {
            if(val!=0)
            {
                flag = false;
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