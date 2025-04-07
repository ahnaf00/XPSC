#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> arr = {1,2,3,4,5};
    // auto it = arr.begin()+1;
    // cout << *it << endl;
    
    for(auto it = arr.begin(); it != arr.end(); it++)
    {
        cout << *it << endl;
    }

    return 0;
}