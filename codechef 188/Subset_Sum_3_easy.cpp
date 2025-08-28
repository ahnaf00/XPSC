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
        int one = 0, two = 0, zero = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

            if(a[i]%3 == 0)
            {
                zero++;
            }
            else if(a[i]%3 == 1)
            {
                one++;
            }
            else if(a[i]%3 == 2)
            {
                two++;
            }
        }

        if(zero>0 || one>=3 || two>=3 || (one>=1 && two>=1))
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