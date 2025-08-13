#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n,m,k;
        cin >> n >> m >> k;

        if(k == 0)
        {
            cout << n*m << endl;
            continue;
        }

        vector<int>row;
        vector<int>col;

        for (int i = m; i <= n*m; i+=m)
        {
            row.push_back(i);
        }

        for (int i = n; i <= n*m; i+=n)
        {
            col.push_back(i);
        }

        int bol_extra_row = 0;
        for (int i = 0; i < row.size(); i++)
        {
            if(row[i]>=k)
            {
                bol_extra_row = row[i]-k;
                break;
            }
        }

        int bol_extra_col = 0;
        for (int i = 0; i < col.size(); i++)
        {
            if(col[i]>=k)
            {
                bol_extra_col = col[i]-k;
                break;
            }
        }

        int mn = min(bol_extra_row,bol_extra_col);

        cout << m*n-mn-k << endl;
         
        

        
        
    }
    

    return 0;
}