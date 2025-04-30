#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n,w;
        cin >> n >> w;

        vector<int> freq(32,0);

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            int p = log2(x);
            freq[p]++;
        }
        

        int height = 0;

        while (n>0)
        {
            int remain=w;
            for (int i = 31; i >= 0; i--)
            {
                while (freq[i] > 0 && pow(2,i) <= remain)
                {
                    remain -= pow(2,i);
                    freq[i]--;
                    n--;
                }
            }
            height++;
        }
        
        cout << height << endl;

        
    }
    

    return 0;
}