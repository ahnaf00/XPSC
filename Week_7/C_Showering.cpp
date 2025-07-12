#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n,s,m;
        cin >> n >> s >> m;

        int remain = INT_MIN;
        
        for (int i = 0; i < n; i++)
        {
            int l, r;
            cin >> l >> r;

            if(i==0)
            {
                remain = r;
            }
            else
            {
                remain = max(remain,abs(remain-l));
            }
            remain = max(remain,abs(m-r));
        }


        if(remain>=s)
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