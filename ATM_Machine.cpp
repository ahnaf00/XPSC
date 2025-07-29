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

        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;

            if(num<=k)
            {
                cout << 1;
                k-=num;
            }
            else
            {
                cout << 0;
            }
        }

        cout << endl;
    }
    

    return 0;
}