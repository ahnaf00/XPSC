#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    int tc;
    cin >> tc;

    while(tc--)
    {
        int n;
        cin >> n;
        vector<int> arr;

        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            arr.push_back(val);
        }

        auto it = max_element(arr.begin(),arr.end());
        ll mx = 0;

        for (int i = 0; i < n; i++)
        {
            if(arr[i] != *it)
            {
                ll vals = *it+arr[i];
                mx+=vals;
            }
        }

        cout << mx << endl;
        
    }

    return 0;
}