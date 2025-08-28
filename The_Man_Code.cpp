#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    
    while(tc--)
    {
        int n;
        cin >> n;
        
        int mx = (n%2) == 0 ? n/2 : (n/2)+1;
        int mn = (n%3) == 0 ? n/3 : (n/3)+1;

        cout << mx << " " << mn << endl;
    }

    return 0;
}