#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int a1,b1,a2,b2;
        cin >> a1 >> b1 >> a2 >> b2;

        int val1 = a1*5+b1;
        int val2 = a2*5+b2;

        if(val1 == val2)
        {
            cout << "YES" << endl;
        }
        else if(val1>=val2 && (val1-val2)%6==0)
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