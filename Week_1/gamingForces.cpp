#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while(tc--)
    {
        int n,totalOp = 0;
        cin >> n;
    
        int arr[n];
    
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
    
        int onesCnt = 0;
    
        for (int i = 0; i < n; i++)
        {
            if(arr[i] == 1)
            {
                onesCnt++;
            }
        }
    
        int oneToZero = 0;
        if(onesCnt%2 == 1)
        {
            onesCnt-=1;
            totalOp = onesCnt / 2;
            for (int i = 0; i < n; i++)
            {
                if(oneToZero == onesCnt)
                {
                    break;
                }
             
                if(arr[i] == 1)
                {
                    oneToZero++;
                    arr[i] = 0;
                }
            }
        }
        else
        {
            totalOp = onesCnt / 2;
            for (int i = 0; i < n; i++)
            {
                if(arr[i] == 1)
                {
                    arr[i] = 0;
                }
            }
        }
    
        for (int i = 0; i < n; i++)
        {
            if(arr[i] > 0)
            {
                totalOp++;
            }
        }
        
        cout << totalOp << endl;
    }

    

    return 0;
}