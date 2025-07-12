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

        int maxVal = 1;

        for (int i = 0; i < 100; i++)
        {
            if(i*i<=n && sqrt(i*i)==i)
                maxVal = max((i*i),maxVal);
        }

        cout << maxVal << endl;

    }
    

    return 0;
}