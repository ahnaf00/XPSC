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

        int ans = 0;

        ans+=max(200,100*(((n/4)*4)+(n%4)));

        cout << ans << endl;
        

        
    }
    

    return 0;
}