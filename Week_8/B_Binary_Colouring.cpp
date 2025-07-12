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

        vector<int>a(32);


        for (int i = 29; i >= 0; i--)
        {
            a[i] = (n>=(1<<i));
            n %= (1<<i);
        }

        int j = 0;
        for (int i = 0; i < 32;)
        {
            if(!a[i])
            {
                i++;
                continue;
            }

            j = i+1;
            while (a[j])
            {
                a[j] = 0;
                j++;
            }

            if(j>i+1)
            {
                a[j] = 1;
                a[i] = -1;
            }

            i = j;
        }

        cout << 32 << endl;
        for(auto x : a)
        {
            cout << x << " ";
        }

        cout << endl;
    }
    
    

    return 0;
}