#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int h,x,y;
        cin >> h >> x >> y;

        // if(h%x == 0)
        // {
        //     cout << (h/x) << endl; 
        // }
        // else if(x%y == 0)
        // {
        //     cout << (h/y) << endl;
        // }
        // else
        // {
            
        // }
        h = h-y;
        if(h%x==0)
        {
            cout << h/x+1 << endl;
        }
        else
        {
            cout << h/x+2 << endl;
        }
    }
    

    return 0;
}