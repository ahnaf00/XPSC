// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     int m = n*(n-1);

//     cout << m << endl;

//     vector<int>a(n);
//     for (int i = 0; i < n; i++)
//     {
//         a[i] = i+1;
//     }
    
//     int cnt = 0;
//     do
//     {
//         // cnt++;
//         // if(cnt>m)
//         // {
//         //     break;
//         // }
//         for (int i = 0; i < n; i++)
//         {
//             cout << a[i] << " ";
//         }
//         cout << endl;
        
//     } while (next_permutation(a.begin(),a.end()));
    
    

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
	
    int n;
    cin>>n;
    int a = 1;
    int k = n;
    cout<<2<<endl;
    while(n--)
    {
        cout<<a<<" ";
        a++;
    }
    cout<<endl;
    --a;
    while(k--)
    {
        cout<<a<<" ";
        a--;
    }
    cout<<endl;
    
    
}