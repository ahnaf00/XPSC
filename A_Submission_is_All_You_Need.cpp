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

        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            sum+=max(1,num);
        }

        cout << sum << endl;


        
    }
    

    return 0;
}