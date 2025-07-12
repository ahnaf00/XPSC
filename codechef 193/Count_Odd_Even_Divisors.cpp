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

        int even = 0, odd = 0;
        for (int i = 1; i <= n; i++)
        {
            if(n%i == 0)
            {
                if(i%2==0)
                {
                    even++;
                }
                else if(i%2 == 1)
                {
                    odd++;
                }
            }
        }
        cout << odd << " " << even << endl;
    }
    

    return 0;
}