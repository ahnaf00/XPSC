#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        string l,r;
        cin >> l >> r;

        int idx = -1, ln = l.size();
        int ans = 0;

        for (int i = 0; i < ln; i++)
        {
            if(l[i] == r[i])
            {
                ans+=2;
            }
            else
            {
                idx = i;
                break;
            }
        }
        int num1 = 0,num2 = 0;
        if(idx!=-1)
        {
            for (int i = idx; i < ln; i++)
            {
                num1 = num1*10+l[i]-'0'; 
                num2 = num2*10+r[i]-'0'; 

                if((num2-num1) == 1)
                {
                    ans++;
                }
                else
                {
                    break;
                }
            }

            cout << ans << endl;
        }
        else
        {
            cout << ans << endl;
        }
        
    }
    

    return 0;
}