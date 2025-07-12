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

        vector<int>a(n),b(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        vector<pair<int,int>> ans;

        for (int i = 0; i < n; i++)
        {
            if(a[i] > b[i])
            {
                ans.push_back({3,i+1});
                swap(a[i],b[i]);
            }
        }

    
        
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n-i-1; j++)
            {
                if(a[j]>a[j+1])
                {
                    int temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;

                    ans.push_back({1,j+1});
                }
            }
        }


        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n-i-1; j++)
            {
                if(b[j]>b[j+1])
                {
                    int temp = b[j];
                    b[j] = b[j+1];
                    b[j+1] = temp;

                    ans.push_back({2,j+1});
                }
            }
        }

        cout << ans.size() << endl;
        for (auto x:ans)
        {
            cout << x.first << " " << x.second << endl;
        }
        
    }
    

    return 0;
}