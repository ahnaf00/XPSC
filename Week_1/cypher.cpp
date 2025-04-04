#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // int w1,w2,w3;
    // string s1,s2,s3;

    // cin >> w1 >> s1;
    // cin >> w2 >> s2;
    // cin >> w3 >> s3;
    
    vector<int> w(n);
    vector<string> s(n);

    for (int i = 0; i < n; i++)
    {
        cin >> w[i];
        cin >> s[i];
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << w[i] << " ";
    //     cout << s[i] << endl;
    // }

    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < w[i]; i++)
        {
            int c = s[i][j];
            int n;

            if(arr[i] == 9 && c == 'D')
            {
                n = 0;
                ans.push_back(n);
            }
            else if(arr[i] == 0 && c == 'U')
            {
                n = 9;
                ans.push_back(n);
            }
            else if(c == 'D')
            {
                n++;
                ans.push_back(n);
            }
            else if(c == 'U')
            {
                n--;
                ans.push_back(n);
            }
        }
    }

    for(int x : ans)
    {
        cout << x << " ";
    }
    
    return 0;
}