#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int l = 0,r = n-1;
    ll ans = 0, sum1 = 0, sum2 = 0;

    while (r>=l)
    {
        if(sum1 > sum2)
        {
            sum2+=arr[r];
            r--;
        }
        else
        {
            sum1+=arr[l];
            l++;
        }

        if(sum1 == sum2)
        {
            ans = max(ans, sum1);
        }
    }

    cout << ans << endl;
    

    return 0;
}