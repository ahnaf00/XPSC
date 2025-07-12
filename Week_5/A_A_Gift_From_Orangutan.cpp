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

        vector<int> v(n),b(n),c(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(),v.end(),greater<>());
        
        int maxElm = *max_element(v.begin(),v.end());
        int minElm = *min_element(v.begin(),v.end());

        b[0] = maxElm;
        c[0] = maxElm;

        int ans = c[0]-b[0];

        for (int i = 1; i < n; i++)
        {
            b[i] = minElm;
            c[i] = maxElm;

            ans+=c[i]-b[i];
        }
        
        cout << ans << endl;
    }
    

    return 0;
}