#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    tuple<string,int,string> std = {"ahnaf",1212,"anan"};
    // cout << get<0>(std) << " " << get<1>(std) << " " << get<2>(std) << '\n';
    auto [name,roll,name2] = std;
    cout << name << " " << roll << " " << name2;

    return 0;
}