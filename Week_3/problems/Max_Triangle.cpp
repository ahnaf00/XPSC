#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while(tc--)
    {
        int n;
        cin >> n;
        
        int st1,st2,st3;

        st1 = n;
        st2 = n-1;
        st3 = n-2;

        int maxElem = max({st1,st2,st3});
        int perimiter = st1+st2+st3;

        if(2*maxElem >= perimiter)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << perimiter << endl;
        }
    }



    return 0;
}