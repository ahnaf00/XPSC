#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int x,y,k;
        cin >> x >> y >> k;

        if((x-k)<=k && y<=k || (y-k)<=k && x<=k)
        {
            cout << "Alice" << endl;
        }
        else
        {
            cout << "Bob" << endl;
        }
        
    }
    

    return 0;
}

/*

IDEA: Alice win condition: when k stones taken from pile A or pile B then remaining stones in pile A or pile B must be less than or equal to k then Alice will win the game Else In any other cases Bob win the game

*/