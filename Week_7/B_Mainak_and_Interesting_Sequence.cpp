#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n,m;
        cin >> n >> m;

        vector<int> arr(n);
        long long int sum = 0;

        if(n>m)
        {
            cout << "NO" << endl;
            continue;
        }
        else if(n%2==0 && m%2==0)
        {
            cout << "YES" << endl;
            for (int i = 0; i < n-2; i++)
            {
                arr[i] = 1;
                sum++;
            }
            arr[n-2] = (m-sum)/2;
            arr[n-1] = arr[n-2];
        }
        else if(n%2==0 && m%2==1)
        {
            cout << "NO" << endl;
            continue;
        }
        else if(n%2==1 && m%2==0 || n%2==1 && m%2==1)
        {
            cout << "YES" << endl;
            for (int i = 0; i < n-1; i++)
            {
                arr[i] = 1;
                sum++;
            }
            arr[n-1] = m-sum;
        }
        

        for(auto x : arr)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    

    return 0;
}