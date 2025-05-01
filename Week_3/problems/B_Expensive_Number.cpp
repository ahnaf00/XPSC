#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        string n;
        cin >> n;

        int last = n.size();

        if(last == 1)
        {
            cout << 0 << endl;
            continue;
        }
        
        for (int i = n.size()-1 ; i >= 0; i--)
        {
            if(n[i] != '0')
            {
                last = i;
                break;
            }
        }

        ll ans = 0;

        for (int i = 0; i < last; i++)
        {
            if(n[i] != '0')
            {
                ans++;
            }
        }

        for (int i = last+1; i < n.size(); i++)
        {
            ans++;
        }

        cout << ans << endl;

    }
    

    return 0;
}