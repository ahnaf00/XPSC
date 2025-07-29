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
        vector<int>a(n,0);
        
        if(n%2==0)
        {
            a[0] = 1;
            a[n-1] = 1;
        }
        else
        {
            int mid = n/2;
            a[mid] = 1;
        }

        for(auto x:a)
        {
            cout << x;
        }
        cout << endl;
    }

    
    

    return 0;
}