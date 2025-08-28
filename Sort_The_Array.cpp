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

        vector<int>a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            
        }

        if(is_sorted(a.begin(),a.end()))
        {
            cout << 0 << endl;
        }
        else
        {
            int l = 0, r = 0, cnt = 0;

            while (r<n)
            {
                if(a[r] != 0)
                {
                    continue;
                }
                else
                {
                    cnt++;
                    r++;
                    l = r;
                }
            }
            
            cout << cnt << endl;
        }


        
    }
    

    return 0;
}