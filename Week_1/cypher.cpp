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
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        
        vector<int> w(n);
        vector<string> s(n);

        for (int i = 0; i < n; i++)
        {
            cin >> w[i];
            cin >> s[i];
        }

        vector<int> ans;

        for (int i = 0; i < n; i++)
        {
            int elem=arr[i];

            for (int j = 0; j < w[i]; j++)
            {
                char c = s[i][j];

                if(c == 'D')
                {
                    if(elem == 9)
                    {
                        elem = 0;
                    }
                    else
                    {
                        elem++;
                    }
                }else if(c== 'U')
                {
                    if(elem == 0)
                    {
                        elem = 9;
                    }
                    else
                    {
                        elem--;
                    }
                }
            }
            ans.push_back(elem);
        }

        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
    }
    
    return 0;
}