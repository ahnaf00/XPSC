#include <bits/stdc++.h>
using namespace std;

#define ll long long int

ll turn_on_ith_bit(ll n, int i)
{
    return (n|(1LL<<i));
}

ll turn_off_ith_bit(ll n, int i)
{
    return (n&(~(1LL<<i)));
}

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        ll a = 0,b, c, d;
        cin >> b >> c >> d;

        a = b;

        ll MSB = max({__lg(b),__lg(c),__lg(d)});
        

        for (int i = 0; i <= MSB; i++)
        {
            if(!((b>>i)&1) && ((d>>i)&1))
            {
                a = turn_on_ith_bit(a,i);
            }

            if(((d>>i)&1) && ((c>>i)&1))
            {
                a = turn_off_ith_bit(a,i);
            }
        }

        if((a|b)-(a&c) == d)
        {
            cout << a << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    

    return 0;
}