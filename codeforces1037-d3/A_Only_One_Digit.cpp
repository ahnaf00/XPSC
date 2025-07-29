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

        vector<int>a;


        while (n>0)
        {
            int num = n%10;
            a.push_back(num);
            n/=10;
        }
        
        int ans = *min_element(a.begin(),a.end());

        cout << ans << endl;
        
    }
    

    return 0;
}