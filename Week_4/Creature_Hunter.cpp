#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n,h;
        cin >> n >> h;

        priority_queue<pair<double,pair<int,int>>> pq;

        for (int i = 0; i < n; i++)
        {
            int s,d;
            cin >> s >> d;
            double rt = d/s;

            pq.push({rt,{d,s}});
        }
        
        int totDamage = 0;
        int totalTime = 0;
        cout << endl;
        while (!pq.empty())
        {
            auto t = pq.top();
            pq.pop();

            // cout << t.first << " " << t.second.first << " " << t.second.second << endl;
            

            if(totDamage<h)
            {
                totDamage+= t.second.first;
                totalTime+= t.second.second;
            }
            else
            {
                continue;
            }
        }

        cout << totalTime << endl;
        
    }
    

    return 0;
}