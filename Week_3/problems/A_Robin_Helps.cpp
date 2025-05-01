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

        vector<int> v(n);

        int hasGold = 0,counter = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        for (int i = 0; i < n; i++)
        {
            if(v[i] >= k)
            {
                hasGold+=v[i];
            }
            else if(v[i] == 0)
            {
                if(hasGold != 0)
                {
                    hasGold--;
                    counter++;
                }
                else
                {
                    continue;
                }
            }
        }
        
        cout << counter << endl;
    }
    

    return 0;
}