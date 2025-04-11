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

        map<string,vector<int>> w;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                string s;
                cin >> s;
                w[s].push_back(i);
            }
        }

        vector<int> ans(3);
        for (auto [key,value]:w)
        {
            if(value.size() == 1)
            {
                ans[value[0]]+=3;
            }
            if(value.size()==2)
            {
                ans[value[0]]++;
                ans[value[1]]++;
            }
        }

        for(auto v : ans)
        {
            cout << v << " ";
        }
    }
    

    return 0;
}