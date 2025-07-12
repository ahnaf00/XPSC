#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;
        
        if(n>=2)
        {
            cout << (n-(1<<__lg(n))) << " " << (1<<__lg(n)) << endl;
        }
        else
        {
            cout << 0 << " " << n << endl;
        }
    }
    

    return 0;
}