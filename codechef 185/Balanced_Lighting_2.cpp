#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;

        map<int,int>mp;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;

            mp[num]++;
        }


        if(mp[1]>n/2 || mp[2]>n/2 || n%2==1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        } 
    }
    

    return 0;
}