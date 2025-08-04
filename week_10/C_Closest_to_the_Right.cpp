#include <bits/stdc++.h>
using namespace std;

int binary_search(int n,int key, vector<int>&v)
{
    int left = 0, right = n-1, mid;

    int ans = n;
    while (left<=right)
    {
        mid = (left+right)/2;
        
        if(key<=v[mid])
        {
            ans = mid;
            right = mid-1;
        }
        else
        {
            left = mid+1;
        }
    }

    return ans+1;
}

int main()
{
    int n,k;
    cin >> n >> k;

    vector<int>a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < k; i++)
    {
        int q;
        cin >> q;

        cout << binary_search(n,q,a) << endl;

    }
    
    

    return 0;
}