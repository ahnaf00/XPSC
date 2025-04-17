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

        string a,b;
        cin >> a >> b;
        
        vector<char> root1,root2;

        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 1)
            {
                root1.push_back(a[i]);
            }
            else
            {
                root2.push_back(a[i]);
            }
        
            if (i % 2 == 0)
            {
                root1.push_back(b[i]);
            }
            else
            {
                root2.push_back(b[i]);
            }
        }
        
        int root1_zeros=0,root2_zeros=0;

        for(char c : root1)
        {
            if(c=='0')
            {
                root1_zeros++;
            }    
        }

        for(auto c : root2)
        {
            if(c=='0')
            {
                root2_zeros++;
            }
        }

        if((n/2)<=root1_zeros && ((n+1)/2)<=root2_zeros)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    
    
    

    return 0;
}