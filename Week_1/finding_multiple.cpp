#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, ans = -1;
    cin >> a >> b >> c;
    
    for (int i = a; i <= b; i++)
    {
        if(i%c == 0)
        {
            ans = i;
            break;
        }
    }
    
    cout << ans << endl;

    return 0;
}