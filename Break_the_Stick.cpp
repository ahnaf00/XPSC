#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n,x;
        cin >> n >> x;

        if(n%2==1 && x%2==1 || n%2==0)
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