#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int a, b;
        cin >> a >> b;

        int minVal = min(a,b/2);
    
        cout << 3*minVal << endl;
    }
    

    return 0;
}
