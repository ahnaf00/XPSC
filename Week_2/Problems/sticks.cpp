#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n),ans;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if(arr[i] <= 1)
        {
            cout << 0 << endl;
            break;
        }
        else if(arr[i]%2==0)
        {
            cout << arr[i] << endl;
            break;
        }
        else if(arr[i] % 2 == 1)
        {
            cout << (arr[i]%2)+1 << endl;
            break;
        }
    }

    

    return 0;
}