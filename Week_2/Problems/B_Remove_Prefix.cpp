#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    int tc;
    cin >> tc;

    while(tc--)
    {
        map<ll,ll> mp;
        int n;
        cin >> n;

        vector<ll> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        
        int counter = 0;
        
        for (int i = n-1; i >= 0; i--)
        {
            if(mp.find(arr[i]) != mp.end())
            {
                break;
            }
            else
            {
                mp[arr[i]] = 1;
                counter++;
            }
        }

        cout << n-counter << endl;
    }
    
    
    return 0;
}