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

        
        int minScore =  INT_MAX;
        
        for (int i = 0; i < n; i++)
        {
            int m,s;
            cin >> m >> s;

            if(m>=7)
            {
                minScore = min(minScore,s);;
            }
        }

        if(minScore==INT_MAX)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << minScore << endl;
        }
        
    }
    

    return 0;
}