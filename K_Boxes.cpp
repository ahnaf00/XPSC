#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n,k;
        cin >> n >> k;

        vector<int>level(n);
        vector<int>gold(n);
        vector<pair<int,int>>a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> level[i];
            a[i].first = level[i];
            a[i].second = i;
        }
        
        sort(a.begin(),a.end());
        
        for (int i = 0; i < n; i++)
        {
            cin >> gold[i];
        }

        vector<long long>ans(n);
        multiset<int>k_values;
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            int pos = a[i].second;
            ans[pos] = sum;

            if(k_values.size()<k)
            {
                sum+=gold[pos];
                k_values.insert(gold[pos]);
            }
            else
            {
                auto first = k_values.begin();
                int first_val = *first;
                if(gold[pos]>first_val)
                {
                    sum-=first_val;
                    k_values.erase(first);
                    sum+=gold[pos];
                    k_values.insert(gold[pos]);
                }
            }
        }

        for(auto x:ans)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    

    return 0;
}