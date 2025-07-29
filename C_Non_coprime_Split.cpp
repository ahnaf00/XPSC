#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if(n==1)
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

int divisors(int num)
{
    for (int i = 2; i*i <= num; i++)
    {
        if(num%i==0)
        {
            return i;
        }
    }

    return num;
}

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int l,r;
        cin >> l >> r;

        if(l<=3 && r<=3)
        {
            cout << -1 << endl;
        }
        else if(r>l)
        {
            if(r%2==0)
            {
                cout << r/2 << " " << r/2 << endl;
            }
            else
            {   
                r = r-1;
                cout << r/2 << " " << r/2 << endl;
            }
        }
        else if(divisors(l) == l)
        {   
            cout << -1 << endl;
        }
        else
        {
            int ans = divisors(l);
            cout << ans << " " << r-ans << endl;
        }
    }
    

    return 0;
}