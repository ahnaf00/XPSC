#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n,k,l;
        cin >> n >> k >> l;

        vector<int> validsongs;

        for (int i = 0; i < n; i++)
        {
            int m,lang;
            cin >> m >> lang;

            if(lang == l)
            {
                validsongs.push_back(m);
            }
        }

        if(validsongs.size() < k)
        {
            cout << -1 << endl;
        }
        else
        {
            sort(validsongs.begin(),validsongs.end(),greater<int>());

            int max_val = 0;
            for (int i = 0; i < k; i++)
            {
                max_val+=validsongs[i];
            }
            cout << max_val << endl;
        }
        
    }

    return 0;
}