#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,t,biscuits = 0;
    cin >> a >> b >> t;
    int counter = a;
    while (t+0.5 > counter)
    {
        counter+=a;
        biscuits += b;
    }

    cout << biscuits << endl;
    

    return 0;
}