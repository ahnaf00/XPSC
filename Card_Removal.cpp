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
            int num;
            cin >> num;
            mp[num]++;
        }

        if(mp.size()==1)
        {
            cout << 0 << endl;
        }
        else
        {
            int ans = 0;
            for(auto [key,val]:mp)
            {
                ans+=val;
            }
            cout << ans-1 << endl;
        }
        

    }
    

    return 0;
}