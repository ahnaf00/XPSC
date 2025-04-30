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

        priority_queue<int> pq;

        for (int i = 1; i <= n; i++)
        {
            pq.push(i);
        }

        // while (pq.size() > 1)
        // {
            
        // }
        vector<pair<int,int>> p;
        for (int i = 0; i < n-1; i++)
        {
            int x = pq.top();
            pq.pop();
            int y = pq.top();
            pq.pop();
            p.push_back({x,y});

            int ans = (x+y+1)/2;
            pq.push(ans);
            
        }

        cout << pq.top() << endl;
        for(auto [x,y]:p)
        {
            cout << x << " " << y << endl;
        }
    }
    

    return 0;
}