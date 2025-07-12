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

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<int>v;

        int minVal = a[0];
        v.push_back(a[0]);

        int idx = INT_MAX;

        for (int i = 1; i < n; i++)
        {
            if(minVal<= a[i])
            {
                minVal = a[i];
                v.push_back(minVal);
            }
            else
            {
                idx = i;
                break;
            }
        }
        
        vector<int>ans;

        for (int i = idx; i < n; i++)
        {
            ans.push_back(a[i]);
        }

        for (int i = 0; i < v.size(); i++)
        {
            ans.push_back(v[i]);
        }

        if(is_sorted(ans.begin(),ans.end()))
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