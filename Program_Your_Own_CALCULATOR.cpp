#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    string c;
    cin >> a >> b >> c;

    if(c=="+")
    {
        cout << a+b << endl;
    }
    else if(c=="-")
    {
        cout << a-b << endl;
    }
    else if (c=="*")
    {
        cout << a*b << endl;
    }
    else if(c=="/")
    {
        if(a!=0)
        {
            cout << fixed<< setprecision(7)<<(double)(a)/b << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }

    return 0;
}