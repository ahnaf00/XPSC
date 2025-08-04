#include <bits/stdc++.h>
using namespace std;

int binary_search(int n, int key, vector<int>&v)
{
    int left = 0, right = n-1, mid;

    int ans = -1;
    while (left<=right)
    {
        mid = (right+left)/2;

        if(key == v[mid])
        {
            ans = mid;
            left = mid+1;
        }
        else if(key<v[mid])
        {
            right = mid-1;
        }
        else
        {
            left = mid+1;
        }
    }
    return ans;
}

int main()
{
    int n,q;
    cin >> n >> q;

    vector<int>a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    int num;
    cin >> num;

    cout << binary_search(n,num,a) << endl;

    return 0;
}