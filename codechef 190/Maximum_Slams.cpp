#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int res = 0;
    
    for(int i = 0; i < 25-n; i+=4)
    {
        if(res*4 > 25)
        {
            break;
        }
        res++;
    }
    
    cout << res << endl;
}
