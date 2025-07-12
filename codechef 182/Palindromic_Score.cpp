#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int a,b,c;
        cin >> a >> b >> c;

        vector<int>arr = {a,b,c};
        sort(arr.begin(),arr.end());

        if(arr[0]%2==1 && arr[1]%2 == 1)
        {
            cout << arr[0]+arr[1]-1 << endl;
        }
        else
        {
            cout << arr[0]+arr[1] << endl;
        }
    }
    

    return 0;
}