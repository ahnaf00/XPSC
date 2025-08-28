#include <bits/stdc++.h>
using namespace std;

bool check_ith_bit_on(int n,int i)
{
    return ((n>>i)&1);
}

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n,k;
        cin >> n >> k;

        if(k*2==n || n == k*2-1 || n==k*2+1)
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