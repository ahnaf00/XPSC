#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {9479, 488, 2374, 1583, 5863, 7811, 6916, 1685, 3960};
    
    int k = 5;
    int r=0,l=0;
    int m = arr.size();

    long long sum = 0, ans = 0;

    while (m > r)
    {
        sum+=arr[r];

        if(r-l+1 == k)
        {
            ans = max(sum,ans);
            sum-=arr[l];
            l++,r++;
        }
        else
        {
            r++;
        }
    }
    cout << ans << endl;
    
    return 0;
}

