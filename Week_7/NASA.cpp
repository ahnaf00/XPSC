#include <bits/stdc++.h>
using namespace std;

const int maxN = (1LL << 15);

vector<int> allPalindrome;

bool isPalindrome(int x)
{
    string s = to_string(x),t;
    t = s;
    reverse(t.begin(),t.end());

    return s == t;
}

void markPalindrome()
{
    for (int i = 0; i < maxN; i++)
    {
        if(isPalindrome(i))
        {
            allPalindrome.push_back(i);
        }
    }
}

int main()
{
    int tc;
    cin >> tc;

    markPalindrome();

    while (tc--)
    {
        int n;
        cin >> n;

        vector<int> arr(n),cnt(maxN+1);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            cnt[arr[i]]++;
        }

        long long ans = n;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < allPalindrome.size(); j++)
            {
                int curr = (arr[i]^allPalindrome[j]);
                ans+=cnt[curr];
            }
        }
        
        cout << ans/2 << endl;
        
    }
    

    return 0;
}