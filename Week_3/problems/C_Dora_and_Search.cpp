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
    
        deque<int> d(n);
    
        for (int i = 0; i < n; i++)
        {
            cin >> d[i];
        }

        bool found  = false;
        int mx = n,mn = 1;
        int l = 1, r = n;

        while (d.size() > 2)
        {
            if((d.front() == mn && d.back() == mx) || (d.front() == mx && d.back() == mn))
            {
                d.pop_back();
                d.pop_front();
                mx--;
                mn++;
                l++;
                r--;
            }
            else if(d.front() == mn)
            {
                d.pop_front();
                mn++;
                l++;
            }
            else if(d.front() == mx)
            {
                d.pop_front();
                mx--;
                l++;
            }
            else if(d.back() == mx)
            {
                d.pop_back();
                mx--;
                r--;
            }
            else if(d.back() == mn)
            {
                d.pop_back();
                mn++;
                r--;
            }
            else
            {
                cout << l << " " << r << endl;
                found = true;
                break;
            }
        }

        if(!found)
        {
            cout << -1 << endl;
        }
        
    
           
    }
    
    
 
    return 0;
}