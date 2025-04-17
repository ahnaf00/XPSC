#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<string,int> names;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if(names.count(s) == 0)
        {
            names.insert({s,1});
            cout << "OK" << endl;
        }    
        else
        {
            string newname = s+to_string(names[s]);
            cout << newname << endl;
            names[s]++;
            names.insert({newname,1});
        }
    }


    // for (auto x : names)
    // {
    //     cout << x.first << " " << x.second << endl;
    // }
    
    

    return 0;
}