#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    map<string,int> msg;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        auto it = msg.find(s);
        if(it->first == s)
        {
            msg[s] = i;
        }
        msg.insert({s,i});
    }

    priority_queue<pair<int,string>> pq;

    for (auto [key,value]:msg)
    {
        pq.push({value,key});
    }
    
    while(!pq.empty())
    {
        auto p = pq.top();
        pq.pop();

        cout << p.second << endl;
    }
    

    return 0;
}