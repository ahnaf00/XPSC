#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n,c;
        cin >> n >> c;
        int temp = c;
        vector<int>a(n);
        bool equal = false, less = false;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

            if(c == equal)
            {
                equal = true;
            }

            if(c>a[i])
            {
                less = true;
            }
        }

        if(equal && less)
        {
            cout << 0 << endl;
            continue;
        }

        sort(a.begin(),a.end());
        
        for (int i = 0; i < n; i++)
        {
            if(a[i]>c)
            {   
                c = a[i]-c;
            }

            if(binary_search(a.begin(),a.end(),c))
            {
                continue;
            }
            else
            {
                cout << c-temp << endl;
                break;
            }
        }
        
    }
    

    return 0;
}