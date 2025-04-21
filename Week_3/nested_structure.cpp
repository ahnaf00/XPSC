#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int,set<int>> mp;
    
    mp[5].insert(1);
    mp[5].insert(2);
    mp[5].insert(3);

    mp[6].insert(11);
    mp[6].insert(12);
    mp[6].insert(13);

    mp[7].insert(111);
    mp[7].insert(222);
    mp[7].insert(444);

    for (auto [key,value]:mp)
    {
        cout << key << " => ";
        for (auto val:value)
        {
            cout << val << " ";
        }
        cout << endl;
    }

    int x = 6,y = 7;
    
    auto lb1 = mp.lower_bound(x);
    if(lb1 != mp.end())
    {
        int ans = lb1->first;
        cout << ans << endl;
        auto lb2 = mp[ans].lower_bound(y);
        if(lb2 != mp[ans].end())
        {
            cout << *lb2 << endl;
        } 
        else
        {

        }
    } 
    else
    {

    }
    

    return 0;
}