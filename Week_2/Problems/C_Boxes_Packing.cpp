#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    map<int,int> mp;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;

        auto it = mp.find(num);

        if(it != mp.end())
        {
            mp[num]++;
        }
        else
        {
            mp.insert({num,1});
        }
    }

    int maxElement = INT_MIN;
    for(auto [key,value]:mp)
    {
        if(value>maxElement)
        {
            maxElement = value;
        }
    }
    
    cout << maxElement << endl;



    return 0;
}