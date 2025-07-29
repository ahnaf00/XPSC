#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    bool flag = false;
    vector<int>a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int x;
    cin >> x;

    for (int i = 0; i < n; i++)
    {
        if(a[i] == x)
        {
            flag = true;
            break;
        }
    }
    
    if(flag)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}