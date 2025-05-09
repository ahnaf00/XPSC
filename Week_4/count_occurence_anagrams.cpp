#include <bits/stdc++.h>
using namespace std;

int main()
{
    string txt,pat;
    cin >> txt >> pat;

    int freq1[26] ={0};

    for (int i = 0; i < pat.size(); i++)
    {
        freq1[pat[i]-'a']++;
    }
    
    int freq2[26] = {0};

    int l = 0, r = 0, ans = 0;

    while (txt.size() > r)
    {
        freq2[txt[r]-'a']++;

        if(r-l+1 == pat.size())
        {
            if(memcmp(freq1,freq2,sizeof(freq1)) == 0)
            {
                ans++;
            }

            freq2[txt[l]-'a']--;

            l++,r++;
        }
        else
        {
            r++;
        }
    }
    
    cout << ans << endl;
    

    return 0;
}