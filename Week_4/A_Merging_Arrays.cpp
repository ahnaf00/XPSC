#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void merge(vector<ll>&a,int left, int mid , int right)
{
    int idx_a,idx_l = 0,idx_r = 0;
    int size_left = mid-left+1,size_right = right-mid;

    vector<ll> l(size_left),r(size_right);

    for (int i = 0; i < size_left; i++)
    {
        l[i] = a[left+i];
    }

    for (int i = 0; i < size_right; i++)
    {
        r[i] = a[mid+1+i];
    }

    for (idx_a = left; idx_l < size_left && idx_r < size_right ; idx_a++)
    {
        if(l[idx_l] < r[idx_r])
        {
            a[idx_a] = l[idx_l];
            idx_l++;
        }
        else
        {
            a[idx_a] = r[idx_r];
            idx_r++;
        }
    }

    while (idx_l < size_left)
    {
        a[idx_a] = l[idx_l];
        idx_l++;
        idx_a++;
    }

    while (idx_r < size_right)
    {
        a[idx_a] = r[idx_r];
        idx_r++;
        idx_a++;
    }    
}

void merge_sort(vector<ll>&a,int left, int right)
{
    if(left >= right)
    {
        return;
    }

    int mid = left+(right-left)/2;

    merge_sort(a,left, mid);
    merge_sort(a,mid+1,right);

    merge(a,left,mid,right);
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<ll> a(n+m);
    // vector<int> b(m);

    for (int i = 0; i < n+m; i++)
    {
        cin >> a[i];
    }

    merge_sort(a,0,n+m-1);
    
    for(auto x : a)
    {
        cout << x << " ";
    }

    return 0;
}