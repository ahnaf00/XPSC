#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n,x,y;
        cin >> n >> x >> y;

        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;

            if(num>=x && num<=y)
            {
                cnt++;
            }
        }

        cout << cnt << endl;
        
    }
    

    return 0;
}