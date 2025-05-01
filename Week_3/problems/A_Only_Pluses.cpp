#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        vector<int> arr(3);
        cin >> arr[0] >> arr[1] >> arr[2];

        for (int i = 0; i < 5; i++)
        {
            (*min_element(arr.begin(),arr.end()))++;
        }
        
        cout << arr[0]*arr[1]*arr[2] << endl;
    }
    

    return 0;
}