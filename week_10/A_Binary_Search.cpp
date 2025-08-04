#include <bits/stdc++.h>
using namespace std;

int binary_search(int num, int k, vector<int>&v)
{
    int left = 0,right = num-1,mid;

    while (left<=right)
    {
        mid = (left+right)/2;
        if(v[mid]==k)
        {
            return mid;
        }

        if(v[mid]<k)
        {
            left = mid+1;
        }
        else
        {
            right = mid-1;
        }
    }
    
    return -1;

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
        int query;
        cin >> query;
        if(binary_search(n,query,a)==-1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    


    return 0;
}

/*

https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/A

*/