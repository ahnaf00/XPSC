#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;

    vector<int> a(n);
    vector<int> b(m);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    int cnt = 0;
    int p_a = 0,p_b= 0;
    
    while (p_b<m)
    {
        if(p_a  < n && b[p_b] > a[p_a])
        {
            p_a++;
            cnt++;        
        }
        else
        {
            cout << cnt << " ";
            p_b++;
        }
    }
    


    return 0;
}