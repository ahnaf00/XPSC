#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int x,y,z;
        cin >> x >> y >> z;
        //  0       1    2
        vector<int> a;
        a.push_back(x*0);
        a.push_back(y*1);
        a.push_back(z*2);

        int sum = 0;
        for (int i = 0; i < a.size(); i++)
        {
            sum+=a[i];
        }

        if(sum>=2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        
    }
    

    return 0;
}