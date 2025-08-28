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
        for (int i = 0; i < 2*n; i++)
        {
            int num;
            cin >> num;

            mp[num]++;
        }


        bool flag = true;
        for(auto [key,val]:mp)
        {
            if(val>2)
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