#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n,cus=1;
   cin >> n;
   
   set<pair<int,int>> s;
   multiset<pair<int,int>> ml;
   vector<int>ans;

   for (int i = 1; i <= n; i++)
   {
        int tp;
        cin >> tp;

        if(tp == 1)
        {
            int val;
            cin >> val;
            s.insert({cus,val});
            ml.insert({val,-cus});
            cus++;
        }
        else if(tp == 2)
        {
            auto it = s.begin();
            ans.push_back(it->first);
            ml.erase({it->second,-it->first});
            s.erase(it);
        }
        else
        {
            int pos = -ml.rbegin()->second;
            int value = ml.rbegin()->first;
            ans.push_back(pos);
            ml.erase(--ml.end());
            s.erase({pos,value});
        }
        
   }

    for(auto x : ans)
    {
        cout << x << " ";
    }
    
    return 0;
}

