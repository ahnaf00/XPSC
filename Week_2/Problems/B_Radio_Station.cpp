#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n,m;
    cin >> n >> m;

    map<string,string> mp_n;

    for (int i = 0; i < n; i++)
    {
        string s,ip;
        cin >> s >> ip;

        mp_n.insert({ip+";",s});
    }


    vector<pair<string,string>> mp_m;
    for (int i = 0; i < m; i++)
    {
        string s,ip;
        cin >> s >> ip;
        mp_m.push_back({s,ip});
    }
    

    for (auto [name,ip]:mp_m)
    {
        auto it = mp_n.find(ip);
        string newstr="";
        if(it!=mp_n.end())
        {
            newstr = "#"+it->second;
        }
        cout << name << " " << ip << " " << newstr << endl;
    }

    return 0;
}