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

        int cost = 0, twos = 0, threes = 0;

        if(n%3==0)
        {
            threes = n/3;
            cost = threes*5;
        }
        else if(n%3 == 1)
        {
            threes = n/3-1;
            twos = 2;
            cost = threes*5+twos*4;
        }
        else
        {
            threes = n/3;
            twos = 1;
            cost = threes*5+twos*4;
        }

        cout << cost << endl;
        
    }
    

    return 0;
}