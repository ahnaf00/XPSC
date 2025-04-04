#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int n;
    cin >> n;

    ll arr[n];
    
    ll ans = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    vector<ll> odd,even;

    for (int i = 0; i < n; i++)
    {
        if(arr[i]%2==0)
        {
            even.push_back(arr[i]);
        }    
        else 
        {
            odd.push_back(arr[i]);
        }
    }

    ll evenSum = 0, oddSum = 0;

    for(ll x : odd)
    {
        oddSum+=x;
    }

    for(ll x : even)
    {
        evenSum+=x;
    }

    if(odd.size()%2==0)
    {
        cout << evenSum+oddSum << endl;
    }
    else
    {
        ll minVal = *min_element(odd.begin(),odd.end());

        cout << (evenSum+oddSum)-minVal << endl;
    }


    
    

    return 0;
}
