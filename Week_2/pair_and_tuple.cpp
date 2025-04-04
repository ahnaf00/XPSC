#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    pair<string,int> std1 = {"ahnaf",0012};
    cout << std1.first << " " << std1.second << '\n';

    auto [name,roll] = std1;
    cout << name <<  " " << roll << '\n';

    int n;
    cin >> n;

    pair<string,int> std[n];
    for (int i = 0; i < n; i++)
    {
        cin >> std[i].first >> std[i].second;
    }

    for(auto [x,y]:std)
    {
        cout << x << " " << y << '\n';
    }


    

    return 0;
}