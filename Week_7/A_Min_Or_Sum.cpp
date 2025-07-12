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

        long long int sum = 0;

        for (size_t i = 0; i < n; i++)
        { 
            int num;
            cin >> num;

            sum |=num;
        }

        cout << sum << endl;
        
    }
    

    return 0;
}