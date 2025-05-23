#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int k , n , m;
        cin >> k >> n >> m;

        queue<int> a,b;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push(x);
        }

        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            b.push(x);
        }

        vector<int> ans;
        bool poss =  true;

        while (!a.empty() || !b.empty())
        {
            bool prog = false;

            if(!a.empty() && a.front() == 0)
            {
                a.pop();
                k++;
                ans.push_back(0);
                prog = true;
            }
            else if(!b.empty() && b.front() == 0)
            {
                b.pop();
                k++;
                ans.push_back(0);
                prog = true;
            }
            else if(!a.empty() && a.front() <= k)
            {
                ans.push_back(a.front());
                a.pop();
                prog = true;
            }
            else if(!b.empty() && b.front() <= k)
            {
                ans.push_back(b.front());
                b.pop();
                prog = true;
            }

            if(!prog)
            {
                poss = false;
                break;
            }
        }

        if(!poss)
        {
            cout << -1 << endl;
        }
        else
        {
            for(auto x : ans)
            {
                cout << x << " ";
            }
            cout << endl;
        }

    }
    

    return 0;
}