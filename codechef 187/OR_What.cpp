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

        vector<int>a(n+1);
        for (int i = 1; i <= n; i++)
        {
            a[i] = i;
        }

        for (int i = 1; i <= n; i++)
        {
            if((i|x)!=x)
            {
                continue;
            }

            if(a[i]!=i)
            {
                continue;
            }

            int j = i^x;

            if(j<1 || j>n)
            {
                continue;
            }

            swap(a[i],a[j]);
        }

        for (int i = 1; i <= n; i++)
        {
            cout << a[i] << " ";
        }

        cout << endl;


        
    }
    

    return 0;
}