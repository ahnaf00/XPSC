#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr(4);

    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }

    int x = arr[0]-arr[2];
    int y = arr[1]-arr[3];

    cout << x << " " << y << endl;
    

    return 0;
}