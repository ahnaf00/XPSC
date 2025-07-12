#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n,m,a,b;
        cin >> n >> m >> a >> b;

        if(m<n*a||m>n*b)
        {
            cout << "NO" << endl;
            continue;
        }

        if((m-a*n)%(b-a) == 0)
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

/*
    bx+a(n-x) = m
    bx+an-ax = m
    x(b-a) = m-an
    x = (m-an)/(b-a)
*/