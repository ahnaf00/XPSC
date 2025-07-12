#include <bits/stdc++.h>
using namespace std;

int kth_bit_on(int n, int i)
{
    return ((n>>i)&1);
}

int main()
{
    int n,m,k;
    cin >> n >> m >> k;

    vector<int>a(m+1);
    for (int i = 0; i < m+1; i++)
    {
        cin >> a[i];
    }
    
    int fedor = a[m];
    
    int frnds = 0;

    for (int i = 0; i < m; i++)
    {
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if(((a[i]>>j)&1)!=((fedor>>j)&1))
            {
                cnt++;
            }
        }
        
        if(cnt <= k)
        {
            frnds++;
        }
    }

    cout << frnds << endl;
    

    return 0;
}