#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    multiset<int> ml;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ml.insert(x);
    }

    vector<int> ans;

    for (int i = 1; i <= n; i++)
    {
        auto it = ml.lower_bound(i);

        if(it != ml.end())
        {
            ans.push_back(*it);
            ml.erase(it);
        }
    }
    
    
    cout << ans.size() << endl;


    return 0;
}