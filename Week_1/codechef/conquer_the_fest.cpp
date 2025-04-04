#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h;
    cin >> h;
    vector<int> arr(h);

    for (int i = 0; i < h; i++)
    {
        cin >> arr[i];
    }
    int target = arr[h-1];

    for (int i = 1; i < h; i++)
    {
        if(target < arr[h-i-1])
        {
            swap(arr[h-i], arr[h-i-1]);
        }
        else if(target > arr[h-i-1])
        {
            if(arr[0] )
            {

            }
            swap(arr[h-i], arr[h-i-1]);
        }
    }

    for (int i = 0; i < h; i++)
    {
        cout << arr[i] << " ";
    }
    
    

    return 0;
}