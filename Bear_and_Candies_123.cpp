#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int limak,bob;
        cin >> limak >> bob;

        int i = 1;
        
        while (true)
        {
            if(i%2!=0)
            {
                limak-=i;
                if(limak<0)
                {
                    cout << "Bob" << endl;
                    break;
                }
            }
            else
            {
                bob-=i;
                if(bob<0)
                {
                    cout << "Limak" << endl;
                    break;
                }
            }
            i++;
        }
    }
    

    return 0;
}