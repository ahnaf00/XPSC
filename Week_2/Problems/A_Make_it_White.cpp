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

        string s;
        cin >> s;

        vector<int> idx;
        
        for (int i = 0; i <= n; i++)
        {
            if(s[i] == 'B')
            {
                idx.push_back(i);
            }
        }
        
        int max_idx = *max_element(idx.begin(), idx.end());
        int min_idx = *min_element(idx.begin(), idx.end());

        int counter = 0;


        for (int i = min_idx; i <= max_idx; i++)
        {
            counter++;
        }

        cout << counter << endl;
    }
    

    return 0;
}