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

        for(auto [key,val]:mp)
        {
            if(val%2==1)
            {
                cout << key << endl;
            }
        }
        
    }
    

    return 0;
}