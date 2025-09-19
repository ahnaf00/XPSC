#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;

        vector<int>a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        if(a[0] == 0)
        {
            cout << n << endl;
            continue;
        }

        int cutOff = a[0];
        int counter = 0;
        for (int i = 1; i < n; i++)
        {
            if(a[i]<cutOff)
            {
                counter++;
            }
        }
        cout << n-counter << endl;
        
    }
    

    return 0;
}