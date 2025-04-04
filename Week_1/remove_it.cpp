#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    cin >> n >> x;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> arr2;

    for (int i = 0; i < n; i++)
    {
        if(arr[i] != x)
        {
            arr2.push_back(arr[i]);
        }
    }

    for(int x : arr2)
    {
        cout << x << " ";
    }
    
    

    return 0;
}