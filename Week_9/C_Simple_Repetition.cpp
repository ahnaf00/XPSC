#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if(n == 1)
    {
        return false;
    }
    for (int i = 2; i*i <= n; i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int x, k;
        cin >> x >> k;

        if(x == 1 && k == 2)
        {
            cout << "YES" << endl;
        }
        else if(isPrime(x) && k == 1)
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