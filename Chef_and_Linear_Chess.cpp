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

        int maxJump = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;

            if(k%num == 0)
            {
                maxJump = max(maxJump,num);
            }
        }

        if(maxJump == INT_MIN)
        {
            cout << -1 << endl;
        }        
        else
        {
            cout << maxJump << endl;
        }
    }
    

    return 0;
}