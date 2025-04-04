#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s,s2="";
    cin >> s;

    sort(s.begin(),s.end());
    // cout << s << endl;
    int strLn = s.length();


    vector<int> freq(26,0);

    for(char c : s)
    {
        freq[c-'a']++;
    }

    int counter=0;

    for (int i = 0; i < 26; i++)
    {
        
        if(freq[i] == 0)
        {
            break;
        }
        counter++;
    }
    

    // for (int i = 0; i < 26; i++)
    // {
    //     cout << freq[i] << " ";
    // }
    // cout << endl;

    if(counter == 26)
    {
        cout << "None" << endl;
    }
    else
    {
        char ch = 'a'+ counter;
        cout << ch << endl;
    }

    return 0;
}