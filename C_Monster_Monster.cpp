#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n,x;
        cin >> n >> x;

        set<int>s;
        int minVal = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;

            minVal = min(minVal,num);
        }
        
        cout << ((n)*x)+minVal << endl;
    }
    

    return 0;
}