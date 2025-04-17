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

        string s;
        cin >> s;
        
        queue<char> bar;

        for(char c : s)
        {
            bar.push(c);
        }

        
        int g=0,b=0;
        while (!bar.empty())
        {
            char ch = bar.front();
            bar.pop();

            if(ch=='B')
            {
                b++;
            }

            if(ch=='G')
            {
                g++;
            }

            if(b==2*g)
            {
                cout << b+1+g << endl;
                break;
            }
            
            if (b==1 && b>2*g)
            {
                cout << 1 << endl;
                break;
            }
        }
    }
    

    return 0;
}