#include <bits/stdc++.h>
using namespace std;

vector<int> arr(2000001);
map<int,int> mp;

int n;

void minMax()
{
    long long score = 0;
    for (int i = 1; i <= n-1; i++)
    {
        score+=min(arr[i],arr[i+1]);
        int maxVal = max(arr[i],arr[i+1]);

        arr.erase(arr.begin()+mp[maxVal]);
    }

    cout << score << endl;
}

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int q;
        cin >> n >> q;


        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
            mp[arr[i]] = i;
        }


        for (int i = 1; i <= q; i++)
        {
            int a,x;
            cin >> a >> x;
            arr[a] = x;
            mp[arr[a]] = x;
            minMax();
        }
    }
    

    return 0;
}