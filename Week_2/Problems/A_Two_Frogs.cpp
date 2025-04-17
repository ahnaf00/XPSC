#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        vector<int> arr(3);
        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i];
        }

        int remain=0;

        if(arr[1] > arr[2])
        {
            remain = arr[1]-arr[2]-1;
        }
        else if (arr[1] < arr[2])
        {
            remain = arr[2]-arr[1]-1;
        }

        if(remain%2==1)
        {
            cout << "YES" << endl;    
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    



    return 0;
}