#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r,b,p,q;
    cin >> r >> b >> p >> q;

    int red = r*p;
    int blue = b*q;

    if(red > blue)
    {
        cout << red << endl;
    }
    else
    {
        cout << blue << endl;
    }

    return 0;
}