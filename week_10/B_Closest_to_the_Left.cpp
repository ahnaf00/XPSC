#include <bits/stdc++.h>
using namespace std;

int binary_search(int x, int k, vector<int>&v)
{
    int left = 0, right = x-1, mid;

    int ans = 0;
    while (left<=right)
    {
        mid = (left+right)/2;

        if(k>=v[mid])
        {
            ans = mid;
            left = mid+1;
        }
        else
        {
            right = mid-1;
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
        int key;
        cin >> key;

        if(key < a[0])
        {
            cout << 0 << endl;
        }
        else
        {
            cout << binary_search(n,key,a) << endl;
        }
    }
    
    

    return 0;
}