#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n,c;
        cin >> n >> c;
        vector<int>a(n);
        bool isEqual = false,less = false;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        set<int>s(a.begin(),a.end());
        int extra = 0;
        while (true)
        {
            int newC = c+extra;

            if(s.count(newC))
            {
                extra++;
                continue;
            }

            bool hasLess = false;
            for (int i = 0; i < n; i++)
            {
                if(a[i]<newC)
                {
                    hasLess = true;
                    break;;
                }
            }
            
            if(hasLess)
            {
                cout << extra << endl;
                break;
            }

            extra++;
        }
        
       
    }
    

    return 0;
}