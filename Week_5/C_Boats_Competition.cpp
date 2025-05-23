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

        map<int,int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }

        int maxPair = INT_MIN;
        for (int i = 2; i <= 2*n; i++)
        {
            int total = 0;
            for(auto [key,value] : mp)
            {
                int p_2 = i-key;
                if(p_2 >= 1 && mp.count(p_2 ))
                {
                    total+=min(value,mp[p_2]);
                }
            }
            total/=2;

            maxPair = max(maxPair,total);
        }
        cout << maxPair << endl;
        
    }
    

    return 0;
}