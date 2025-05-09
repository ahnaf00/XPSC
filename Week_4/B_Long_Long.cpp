#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        
        ll sum = 0;
        bool validSeg = false;
        int opt = 0;
        
        for (int i = 0; i <= n; i++)
        {
            if( i < n )
            {
                sum+=abs(v[i]);
            }

            if(validSeg)
            {
                if(i == n || v[i] > 0)
                {
                    opt++;
                    validSeg = false;
                }
            }
            else
            {
                if(v[i] < 0)
                {
                    validSeg = true;
                }
            }
        }   

        cout << sum << " " << opt << endl;
    }
    

    return 0;
}