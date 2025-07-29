#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        
        
        int om = INT_MIN, addy = INT_MIN, omcnt = 0, adcnt = 0;
    
        for(int i=0;i<n;i++){
            if(a[i]!=0)
            {
                omcnt++;
                om = max(om,omcnt);
            }
            if(a[i] == 0)
            {
                omcnt = 0;
            }
        }
        
        for(int i=0;i<n;i++){
            if(b[i]!=0)
            {
                adcnt++;
                addy = max(addy,adcnt);
            }
            if(b[i] == 0)
            {
                adcnt = 0;
            }
        }
        
        if(om==addy)
        {
            cout << "Draw" << endl;
        }
        else if(om>addy)
        {
            cout << "Om" << endl;
        }
        else
        {
            cout << "Addy" << endl;
        }
    }
    
    
}
