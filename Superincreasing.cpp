#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n,k,x;
        cin >> n >> k >> x;

        int curr = 1;
        bool flag =  true;
        for (int i = 1; i < k; i++)
        {
            int l = curr;
            if(curr>=x)
            {
                flag = false;
                break;
            }
            curr+=(l+1);
        }
    
        if(flag)
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