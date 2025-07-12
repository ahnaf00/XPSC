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

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int l = 0, r = n-1, ans = 0;

        while (r>l)
        {
            if(ans == k)
            {
                cout << "YES" << endl;
                break;
            }

            if(v[l] == v[r])
            {
                ans++;
            }
            // else
            // {

            // }   
            l++;
            r--;
        }
        
        // cout << ans <<  endl;
    }
    

    return 0;
}