#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if(n%3 == 0)
    {
        cout << n << endl;
    }
    else if((n+1)%3==0)
    {
        cout << n+1 << endl;
    }
    else if((n-1)%3==0)
    {
        cout << n-1 << endl;
    }

    return 0;
}