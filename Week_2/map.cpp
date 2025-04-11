#include <bits/stdc++.h>
using namespace std;

int main()
{

    map<int,int> mp;
    mp[1] = 100;
    mp[20] = 212;
    mp[2] = 11;
    mp[19] = 299;
    mp[21] = 3;

    
    for(auto [key,value]:mp)
    {
        cout <<  key << " => " << value << endl;
    }

    cout << endl;

    /*
    
    auto it = mp.find(6);
    if(it == mp.end())
    {
        cout << "Not found" << endl;
    }
    else
    {
        cout << it->first << " => " << it->second;
    }
    

    mp.erase(1);

    */

    /*
    
    auto it = mp.find(1);

    if(it != mp.end())
    {
        mp.erase(it);
    }
    
    
    for (auto [key,value]:mp)
    {
        cout << key << " => " << value << endl;
    }

    for (auto i = mp.begin(); i != mp.end(); i++)
    {
        cout << i->first << " => " << i->second << endl;
    }
    
    // lower_bound-> returns greater or equal value
 
    mp[19] = 200; 
    auto it = mp.lower_bound(19);
    cout << it->first << " => " << it->second << endl;
   
    */

    // Strictly return the greater value
    auto it = mp.upper_bound(19);
    cout << it->first << " => " << it->second << endl;



    

    return 0;
}