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

        vector<int> a(n),prex(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        
        prex[0] = a[0];

        for (int i = 1; i < n; i++)
        {
            prex[i] = prex[i-1]+a[i];
        }

        bool flag = false;

        for (int i = 0; i < n; i++)
        {
            if(prex[i]%3 == 0)
            {
                flag = true;
                break;
            }
        }
        

        if(flag)
        {
            reverse(a.begin(), a.end());
            for (int i = 1; i < n; i++)
            {
                prex[i] = prex[i-1]+a[i];
            }

            for (int i = 0; i < n; i++)
            {   
                if(prex[i]%3 == 0)
                {
                    flag = true;
                    break;
                }
            }
        }
        else
        {
            cout << "YES" << endl;
        }
        
    }
    

    return 0;
}