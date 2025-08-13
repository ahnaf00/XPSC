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

        int alice_x_remove = min(x,k);
        int alice_y_remove = min(y,k);
        int alice_remove = max(alice_x_remove,alice_y_remove);

        if(x>=y)
        {
            x-=alice_remove;
            if(x>=alice_remove+1 || y>=alice_remove+1)
            {
                cout << "Bob" << endl;
            }
            else
            {
                cout << "Alice" << endl;
            }
        }
        else 
        {
            y-=alice_remove;
            if(x>=alice_remove+1 || y>=alice_remove+1)
            {
                cout << "Bob" << endl;
            }
            else
            {
                cout << "Alice" << endl;
            }
        }
    }
    

    return 0;
}