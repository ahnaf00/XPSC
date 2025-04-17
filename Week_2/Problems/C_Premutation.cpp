#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while(tc--)
    {
        int n; 
        cin >> n;
        int num, row;

        vector<vector<int>> arr;

        for (int i = 0; i < n; i++)
        {
            vector<int> arr2;
            for (int j = 0; j < n-1; j++)
            {
                int val;
                cin >> val;
                arr2.push_back(val);
            }
            arr.push_back(arr2);
        }
        
        vector<int> ans(n),freq(n+1);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 1; j++)
            {   
                ans[i] = arr[i][j];
            }
        }

        for(auto x : ans)
        {
            freq[x]++;
        }

        int val=-1;

        for (int i = 0; i <= n; i++)
        {
            if(freq[i] > 1)
            {
                val = i;
                break;
            }
        }

        vector<int>ans2;
        for (int i = 0; i < n; i++) {
            if (arr[i][0] != val) {
                ans2.push_back(val);
                for (int j = 0; j < n - 1; j++) {
                    ans2.push_back(arr[i][j]);
                }
                break;
            }
        }

        for(auto x : ans2)
        {
            cout << x << " ";
        }
        cout << endl;
    }

    




    return 0;
}